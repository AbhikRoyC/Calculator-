#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *theme_css =
    "window { background-color: #1e1e1e; }\n"
    "grid { margin: 15px; }\n"
    "entry { font-size: 36pt; background: transparent; color: white; border: none; box-shadow: none; padding-bottom: 15px; }\n"
    "button { font-size: 18pt; font-weight: bold; background-color: #000000; color: black; border-radius: 30px; min-height: 60px; min-width: 60px; border: none; box-shadow: none; }\n"
    "button:hover { background-color: #4a4a4a; }\n"
    "button.operator { background-color: #000000; color: black; }\n"
    "button.operator:hover { background-color: #ffb340; }\n"
    "button.clear { background-color: #000000; color: black; }\n"
    "button.clear:hover { background-color: #d4d4d4; }\n";

static double first_operand = 0;
static char current_operator = '\0';
static int awaiting_next_operand = 0;

static void process_input(const char *input, GtkWidget *display) {
    const char *current_text = gtk_editable_get_text(GTK_EDITABLE(display));

    // 1. Backspace Logic
    if (strcmp(input, "⌫") == 0) {
        if (awaiting_next_operand == 1) return; // Do not delete if a calculation just finished
        
        int len = strlen(current_text);
        if (len > 0) {
            char new_text[256];
            strncpy(new_text, current_text, len - 1); // Copy all but the last character
            new_text[len - 1] = '\0';                 // Close off the string
            gtk_editable_set_text(GTK_EDITABLE(display), new_text);
        }
        return;
    }

    if (strcmp(input, "C") == 0) {
        first_operand = 0;
        current_operator = '\0';
        awaiting_next_operand = 0;
        gtk_editable_set_text(GTK_EDITABLE(display), "");
        return;
    }

    if (strcmp(input, "=") == 0) {
        if (current_operator == '\0') return;
        double second_operand = atof(current_text);
        double result = 0;

        if (current_operator == '+') result = first_operand + second_operand;
        else if (current_operator == '-') result = first_operand - second_operand;
        else if (current_operator == '*') result = first_operand * second_operand;
        else if (current_operator == '/') {
            if (second_operand != 0) result = first_operand / second_operand;
            else {
                gtk_editable_set_text(GTK_EDITABLE(display), "Error");
                awaiting_next_operand = 1;
                return;
            }
        }

        char result_str[64];
        snprintf(result_str, sizeof(result_str), "%g", result);
        gtk_editable_set_text(GTK_EDITABLE(display), result_str);
        
        current_operator = '\0';
        awaiting_next_operand = 1; 
        return;
    }

    if (strcmp(input, "+") == 0 || strcmp(input, "-") == 0 ||
        strcmp(input, "*") == 0 || strcmp(input, "/") == 0) {
        first_operand = atof(current_text);
        current_operator = input[0];
        awaiting_next_operand = 1;
        return;
    }

    if (awaiting_next_operand == 1) {
        gtk_editable_set_text(GTK_EDITABLE(display), input);
        awaiting_next_operand = 0;
    } else {
        char new_text[256];
        snprintf(new_text, sizeof(new_text), "%s%s", current_text, input);
        gtk_editable_set_text(GTK_EDITABLE(display), new_text);
    }
}

static void on_button_clicked(GtkButton *button, gpointer user_data) {
    const char *button_label = gtk_button_get_label(button);
    process_input(button_label, GTK_WIDGET(user_data));
}

static gboolean on_key_pressed(GtkEventControllerKey *controller, guint keyval, guint keycode, GdkModifierType state, gpointer user_data) {
    GtkWidget *display = GTK_WIDGET(user_data);
    
    switch (keyval) {
        case GDK_KEY_0: case GDK_KEY_KP_0: process_input("0", display); return TRUE;
        case GDK_KEY_1: case GDK_KEY_KP_1: process_input("1", display); return TRUE;
        case GDK_KEY_2: case GDK_KEY_KP_2: process_input("2", display); return TRUE;
        case GDK_KEY_3: case GDK_KEY_KP_3: process_input("3", display); return TRUE;
        case GDK_KEY_4: case GDK_KEY_KP_4: process_input("4", display); return TRUE;
        case GDK_KEY_5: case GDK_KEY_KP_5: process_input("5", display); return TRUE;
        case GDK_KEY_6: case GDK_KEY_KP_6: process_input("6", display); return TRUE;
        case GDK_KEY_7: case GDK_KEY_KP_7: process_input("7", display); return TRUE;
        case GDK_KEY_8: case GDK_KEY_KP_8: process_input("8", display); return TRUE;
        case GDK_KEY_9: case GDK_KEY_KP_9: process_input("9", display); return TRUE;
        case GDK_KEY_plus: case GDK_KEY_KP_Add: process_input("+", display); return TRUE;
        case GDK_KEY_minus: case GDK_KEY_KP_Subtract: process_input("-", display); return TRUE;
        case GDK_KEY_asterisk: case GDK_KEY_KP_Multiply: process_input("*", display); return TRUE;
        case GDK_KEY_slash: case GDK_KEY_KP_Divide: process_input("/", display); return TRUE;
        case GDK_KEY_Return: case GDK_KEY_KP_Enter: case GDK_KEY_equal: process_input("=", display); return TRUE;
        case GDK_KEY_Escape: case GDK_KEY_c: case GDK_KEY_C: process_input("C", display); return TRUE;
        // 2. Map the physical Backspace and Period keys
        case GDK_KEY_BackSpace: process_input("⌫", display); return TRUE;
        case GDK_KEY_period: case GDK_KEY_KP_Decimal: process_input(".", display); return TRUE;
    }
    
    return FALSE; 
}

static void create_button(const char *label, GtkWidget *grid, int col, int row, GtkWidget *display) {
    GtkWidget *btn = gtk_button_new_with_label(label);
    
    if (strcmp(label, "/") == 0 || strcmp(label, "*") == 0 || 
        strcmp(label, "-") == 0 || strcmp(label, "+") == 0 || strcmp(label, "=") == 0) {
        gtk_widget_add_css_class(btn, "operator");
    } else if (strcmp(label, "C") == 0 || strcmp(label, "⌫") == 0) {
        gtk_widget_add_css_class(btn, "clear");
    }

    gtk_grid_attach(GTK_GRID(grid), btn, col, row, 1, 1);
    g_signal_connect(btn, "clicked", G_CALLBACK(on_button_clicked), display);
}

static void on_activate(GtkApplication *app, gpointer user_data) {
    GtkCssProvider *provider = gtk_css_provider_new();
    gtk_css_provider_load_from_string(provider, theme_css);
    gtk_style_context_add_provider_for_display(gdk_display_get_default(), GTK_STYLE_PROVIDER(provider), GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "My Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 480); // Made window slightly taller for 5 rows
    
    GtkWidget *grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 8);    
    gtk_grid_set_column_spacing(GTK_GRID(grid), 8); 
    gtk_window_set_child(GTK_WINDOW(window), grid);

    GtkWidget *display = gtk_entry_new();
    gtk_editable_set_editable(GTK_EDITABLE(display), FALSE); 
    gtk_editable_set_alignment(GTK_EDITABLE(display), 1.0); 
    gtk_widget_set_can_focus(display, FALSE);
    gtk_grid_attach(GTK_GRID(grid), display, 0, 0, 4, 1);

    // 3. The Reorganized Standard Calculator Layout
    create_button("C", grid, 0, 1, display);
    create_button("⌫", grid, 1, 1, display);
    create_button("/", grid, 2, 1, display);
    create_button("*", grid, 3, 1, display);

    create_button("7", grid, 0, 2, display);
    create_button("8", grid, 1, 2, display);
    create_button("9", grid, 2, 2, display);
    create_button("-", grid, 3, 2, display);

    create_button("4", grid, 0, 3, display);
    create_button("5", grid, 1, 3, display);
    create_button("6", grid, 2, 3, display);
    create_button("+", grid, 3, 3, display);

    create_button("1", grid, 0, 4, display);
    create_button("2", grid, 1, 4, display);
    create_button("3", grid, 2, 4, display);
    create_button("=", grid, 3, 4, display);

    create_button("0", grid, 0, 5, display);
    create_button(".", grid, 1, 5, display);

    GtkEventController *key_controller = gtk_event_controller_key_new();
    g_signal_connect(key_controller, "key-pressed", G_CALLBACK(on_key_pressed), display);
    gtk_widget_add_controller(window, key_controller);

    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {
    GtkApplication *app = gtk_application_new("com.example.calculator", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
    return status;
}