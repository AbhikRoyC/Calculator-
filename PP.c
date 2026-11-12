#include <stdio.h>
//assignment 6 PP1
/* int main() {
    int a,b,c;
    printf("Enter three integers: ");
    // Input Validation: Always check if scanf successfully read the expected items
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three integers.\n");
        return 1; // Exit with an error code
    }
    printf("Ascending order: ");
    // Using a series of if-else statements to determine the order
    if (a <= b) {
        if (b <= c) {
            // If a is <= b, and b is <= c, the order is already a, b, c
            printf("%d, %d, %d\n", a, b, c);
        } else {
            // We know b is larger than c. Now we must compare a and c.
            if (a <= c) {
                printf("%d, %d, %d\n", a, c, b);
            } else {
                printf("%d, %d, %d\n", c, a, b);
            }
        }
    } else { 
        // We know b is strictly less than a
        if (a <= c) {
            // b is less than a, and a is <= c
            printf("%d, %d, %d\n", b, a, c);
        } else {
            // We know a is larger than c. Now we must compare b and c.
            if (b <= c) {
                printf("%d, %d, %d\n", b, c, a);
            } else {
                printf("%d, %d, %d\n", c, b, a);
            }
        }
    }

    return 0;
} 

//assignment 6 PP2
int main() {
    int n;
    // The 'do' acts exactly like your 'read_again:' label
    do {
        printf("Enter a non-negative integer: ");
        scanf("%d", &n);
        // check if the number is negative
        if(n<0) {
            printf("Negative value is not accepted.\n");
        }
    }
    while(n<0);
    printf("Accepted value = %d\n", n);
    return 0;
} 

// assignment 6 PP3
int main(void) {
    int count = 1;

// This is the label the goto will jump to
start_loop: 
    
    printf("%d\n", count);
    count++;

    // If we haven't reached 3 yet, jump back to the top
    if (count <= 3) {
        goto start_loop; 
    }

    printf("Done!\n");
    return 0;
} 

// alternative using a while loop
int main(void) {
    int count = 1;

    // The while loop automatically checks the condition and jumps back to the top
    while (count <= 3) {
        printf("%d\n", count);
        count++;
    }

    printf("Done!\n");
    return 0;
} */

//assignment 7 PP1
/* #include "math_utils.h"
 int main() {
    int x,y,n;
    printf("Enter two integers: \n");
    if(scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1; // Exit with an error code
    }
    printf("Sum = %d\n\n", add(x, y));

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }
    printf(isEven(n) ? "%d is an Even number.\n" : "%d is an Odd number.\n", n);

    return 0;
} */

//assignment 7 PP2

//global variable declaration
/* int global_count = 10;
void demonstrate_variables(void) {
    // Local Variable Declartion
    int local_count = 1;
    // Static Variable Declaration
    static int static_count=1;
    printf("Global Count: %d | Local Count: %d | Static Count: %d\n", global_count, local_count, static_count);
    //increament all three variables
    global_count++;
    local_count++;
    static_count++;
}
int main(){
    printf("Demonstrating Global Variable:\n");
    demonstrate_variables();
    printf("Demonstrating Local Variable:\n");
    demonstrate_variables();
    printf("Demonstrating Static Variable:\n");
    demonstrate_variables();
    return 0;
} */

// assignment 7 PP3
/* int add(int a, int b) {
    return a+b;
}
int subtract(int a, int b) {
    return a-b;
}
int main() {
    int x=10, y=7;
    int(*operation)(int,int);
    operation = add;
    printf("Addition of %d and %d is: %d\n", x, y, operation(x,y));
    operation = subtract;
    printf("Subtraction of %d and %d is: %d\n", x, y, operation(x,y));
    return 0;
} */

//Assignment 11 PP1
/* #define MAX 10
void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2) {
    // Initialize the result matrix with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Execute the dot product
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// 2. Helper function to print any 2D matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    // Initialize test matrices with predefined values
    int matrixA[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6}
    }; 
    
    int matrixB[MAX][MAX] = {
        {7, 8},
        {9, 10},
        {11, 12}
    }; 
    
    int resultMatrix[MAX][MAX];
    
    int r1 = 2, c1 = 3; // Dimensions of A
    int r2 = 3, c2 = 2; // Dimensions of B

    // Verify multiplication rule (Columns of A == Rows of B)
    if (c1 != r2) {
        printf("Error: Matrix multiplication not possible.\n");
        return 1;
    }

    // Pass the arrays into the functions
    multiplyMatrices(matrixA, matrixB, resultMatrix, r1, c1, r2, c2);

    printf("Resultant Matrix:\n");
    printMatrix(resultMatrix, r1, c2);

    return 0;
} */
/* int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int*ptr = arr + size-1; //Pointer to the last element of the array 
    while(ptr >= arr) {
        printf("%d\n", *ptr);
        ptr--;
    }
    printf("\n");
    return 0;
} */
// assignment 8 pp 1
/* void printReverse(int n) {
//to handle negative numbers
    if (n < 0) {
        printf("-");
        n = -n; 
    }
    
    // Base Case: If only one digit is left, print it and stop the recursion
    if (n < 10) {
        printf("%d", n);
        return;
    }
    
    // Extract and print the last digit
    printf("%d", n % 10);
    
    //Recursive Call: Chop off the last digit and send the rest back through
    printReverse(n / 10);
}

int main(void) {
    int num;
    
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        return 1;
    }
    
    printf("Reversed: ");
    printReverse(num);
    printf("\n");
    
    return 0;
} */
// Assignment 8 pp2 
/* void PrintReverse(char*str) {
    if (*str == '\0') {
        return; // Base case: end of string
    }
    PrintReverse(str +1);
    printf("%c", *str); // Print the current character after the recursive call
}
    int main(){
        char text[100];
        printf("Enter a string:");
        if(fgets(text, sizeof(text), stdin) == NULL) {
            printf("Error reading input.\n");
            return 1;
        }
        printf("Reversed string: ");
        PrintReverse(text);
        printf("\n");
        return 0;
    } */
// Assignment 9 pp1 
/* #include "global.h"
int shared_counter = 0; // Definition of the global variable
int main() {
    printf("Initial shared_counter: %d\n", shared_counter);
    incrementCounter();
    printf("After helper function : %d\n", shared_counter);
    return 0;
} */
// Assignment 9 pp2
/* int global_var = 10;

void demonstrateStorage(void) {
    int auto_var = 10;
    static int static_var = 10;

    printf("Global: %d | Static: %d | Auto: %d\n", global_var, static_var, auto_var);
    global_var++;
    static_var++;
    auto_var++;
}
int main() {
    demonstrateStorage();
    demonstrateStorage();
    demonstrateStorage();
    return 0;
} */
// assignment 9 pp3 
/* void findminmax(int *arr, int size, int *min, int *max) {
    if (size <= 0) {
        return;
    }
    // Initialize both pointers to the first element's value
    *min = arr[0];
    *max = arr[0];

    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; // Update the value at the min memory address
        }
        if (arr[i] > *max) {
            *max = arr[i]; // Update the value at the max memory address
        }
    }
}
int main() {
    int numbers[] = {45, 12, 78, 4, 99, 23};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // Declare the variables, but they don't need initial values yet
    int min_val, max_val;

    // Pass the raw memory addresses using &
    findminmax(numbers, size, &min_val, &max_val);

    printf("Array minimum: %d\n", min_val);
    printf("Array maximum: %d\n", max_val);

    return 0;
} */
// assignment 10 pp1
/* int main () {
    double d = 3.14159;
    long l = 1234567890L; // The 'L' suffix explicitly tells the compiler it is a long integer
    double *pd = &d; // Pointer to double
    long *pl = &l; // Pointer to long
    // Formatted output
    printf("%-7s | %-12s | %-14s | %-14s | %-12s\n", "Type", "Value", "Var Address", "Pointer Holds", "Dereferenced");
    // Using %f for double and %ld for long
    printf("%-7s | %-12.7f | %p | %p | %-12.7f\n", "double", d, (void *)&d, (void *)pd, *pd);
    printf("%-7s | %-12.7f | %p | %p | %-12.7f\n", "long", (double)l, (void *)&l, (void *)pl, (double)*pl);
    // Pointer Size Demonstration
    printf("Size of double: %zu bytes | Size of double pointer: %zu bytes\n", sizeof(d), sizeof(pd));
    printf("Size of long:   %zu bytes | Size of long pointer:   %zu bytes\n", sizeof(l), sizeof(pl));
    return 0;
} */
// assignment 10 pp2
/* void modifyvariables(int *int_ptr, double *double_ptr, char *char_ptr) {
    *int_ptr += 1695; // Increment the integer by 1695
    *double_ptr *= 3.14159265; // Multiply by Pi
    *char_ptr = 'Z'; // Change the character to 'Z'
}

int main(void) {
    int i = 100;
    double d = 12.5;
    char c = 'K';
    
    printf("Integer : %d\n", i);
    printf("Double : %f\n", d);
    printf("Character : %c\n", c);
    
    // Pass the memory addresses using the '&' operator
    modifyvariables(&i, &d, &c);
    
    printf("Modified Integer : %d\n", i);
    printf("Modified Double : %f\n", d);
    printf("Modified Character : %c\n", c);
    
    return 0;
} */
// assginment 10 pp3
// A custom data structure that takes up 32 bytes of memory
/* struct MassiveStruct {
    double data[4]; 
};
int main() {
    // Declare different pointer types
    char *char_ptr;
    int *int_ptr;
    double *double_ptr;
    void *void_ptr;
    struct MassiveStruct *struct_ptr;
    printf("%-18s | %-16s | %-16s\n", "Data Type", "Size of Data", "Size of Pointer");
    printf("%-18s | %zu bytes | %zu bytes\n", "char", sizeof(*char_ptr), sizeof(char_ptr));
    printf("%-18s | %zu bytes | %zu bytes\n", "int", sizeof(*int_ptr), sizeof(int_ptr));
    printf("%-18s | %zu bytes | %zu bytes\n", "double", sizeof(*double_ptr), sizeof(double_ptr));
    printf("%-18s | N/A (Generic)| %zu bytes\n", "void", sizeof(void_ptr));
    printf("%-18s | %zu bytes | %zu bytes\n", "struct (Custom)", sizeof(*struct_ptr), sizeof(struct_ptr));

    return 0;
} */
// assignment 11 pp3
/* int main() {
    int i = 42;
    float f = 3.14f;
    char c = 'A';
    // declare a void pointer
    void *ptr;
    // Assign the address of the integer variable to the void pointer
    ptr = &i;
    printf("Integer value: %d\n", *(int*)ptr);
    // Assign the address of the float variable to the void pointer
    ptr = &f;
    printf("Float value: %f\n", *(float*)ptr);
    // Assign the address of the character variable to the void pointer
    ptr = &c;
    printf("Character value: %c\n", *(char*)ptr);
    return 0;
} */

//Assignment 12 pp1
/* int main(void) {
    // Initializing character by character with single quotes
    char filename[] = {'S', 't', 'u', 'd', 'y', '\0'};

    printf("File name: %s\n", filename);

    return 0;
} */

//Assignment 12 pp2 
#include <string.h>
/* int main() {
    char address[200];
    printf("Enter your address: ");
    if(fgets(address, sizeof(address), stdin)!= NULL) {
        address[strcspn(address, "\n")] = '\0'; // Remove newline character if present
    }
    printf("Your address is: %s\n", address);
    return 0;
} */

//Assignment 12 pp3
/* int main() {
char str[200];
    int count = 0;
    printf("Enter a string: ");
    if(fgets(str, sizeof(str), stdin) != NULL) {
        for(const char *ptr = str; *ptr != '\0'; ptr++) {
            if(*ptr == '\n') {
                continue; // Skip the newline character
            }
            count++;
        }
    }
    printf("Total number of characters (excluding newline): %d\n", count);
    return 0;
} */

//Assignment 13 pp1 

// 1. Manual implementation of strlen
/* size_t my_strlen(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str; 
}

// 2. Manual implementation of strcat
char *my_strcat(char *dest, const char *src) {
    char *ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

// 3. Manual implementation of strcmp
int my_strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// 4. Helper function to read input and manually strip the newline
void get_input(const char *prompt, char *buffer, size_t size) {
    printf("%s", prompt);
    if (fgets(buffer, size, stdin) != NULL) {
        // Traverse using pointers to remove the newline without relying on strcspn()
        char *ptr = buffer;
        while (*ptr != '\0') {
            if (*ptr == '\n') {
                *ptr = '\0';
                break;
            }
            ptr++;
        }
    } else {
        buffer[0] = '\0';
    }
}

int main(void) {
    char buffer[200];
    char add_on[100];
    char word1[100];
    char word2[100];


    // Collect inputs for concatenation
    get_input("Enter the base string: ", buffer, sizeof(buffer));
    get_input("Enter the string to append: ", add_on, sizeof(add_on));
    
    // Collect inputs for comparison
    printf("\n");
    get_input("Enter the first word for comparison: ", word1, sizeof(word1));
    get_input("Enter the second word for comparison: ", word2, sizeof(word2));

    // Test my_strlen
    printf("Length of '%s' : %zu\n", add_on, my_strlen(add_on));

    // Test my_strcat
    my_strcat(buffer, add_on);
    printf("Concatenation   : %s\n", buffer);

    // Test my_strcmp
    int result = my_strcmp(word1, word2);
    printf("Comparison      : ");
    if (result == 0) {
        printf("'%s' and '%s' are identical.\n", word1, word2);
    } else if (result < 0) {
        printf("'%s' comes before '%s' alphabetically.\n", word1, word2);
    } else {
        printf("'%s' comes after '%s' alphabetically.\n", word1, word2);
    }

    return 0;
} */

//Assignment 13 pp2
#include <ctype.h>

/* int main(void) {
    char str[200];
    int uppercase = 0, lowercase = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    
    // Use fgets to safely read the string, including spaces
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        // Iterate through the string using a pointer
        for (const char *ptr = str; *ptr != '\0'; ptr++) {
            
            if (isupper((unsigned char)*ptr)) {
                uppercase++;
            } else if (islower((unsigned char)*ptr)) {
                lowercase++;
            } else if (isdigit((unsigned char)*ptr)) {
                digits++;
            } else if (isspace((unsigned char)*ptr)) {
                // fgets captures the newline character '\n' as a space. 
                // To match standard word spacing, we ignore the newline.
                if (*ptr != '\n') {
                    spaces++;
                }
            }
        }
    }
    printf("Uppercase letters : %d\n", uppercase);
    printf("Lowercase letters : %d\n", lowercase);
    printf("Digits            : %d\n", digits);
    printf("Spaces            : %d\n", spaces);

    return 0;
}. */

//assignment 13 pp3
/* int main(void) {
    char parent[200];
    char target[100];

    // Read parent string safely
    printf("Enter the parent string: ");
    if (fgets(parent, sizeof(parent), stdin) != NULL) {
        parent[strcspn(parent, "\n")] = '\0';
    }

    // Read target substring safely
    printf("Enter the substring to search for: ");
    if (fgets(target, sizeof(target), stdin) != NULL) {
        target[strcspn(target, "\n")] = '\0';
    }

    // Edge case: If target is empty, do not search
    if (target[0] == '\0') {
        printf("\nResult: Please provide a valid substring to search for.\n");
        return 1;
    }
    // Use strstr() to locate the substring within the parent string
    char *result = strstr(parent, target);
    if (result != NULL) {
        // Pointer arithmetic to find the exact starting index position
        int index = result - parent;
        printf("Match Found: '%s' occurs as a substring in the parent string.\n", target);
        printf("Starting Index: %d\n", index);
    } else {
        printf("No Match: '%s' does not occur in the parent string.\n", target);
    }

    return 0;
} */

//Assignment 14 pp1
/* #define MAX_STR 50

// Expanded struct to hold all financial data
typedef struct {
    int id;
    char name[MAX_STR];
    char designation[MAX_STR];
    char department[MAX_STR];
    double basic;
    double hra;
    double da;
    double pf;
    double gross;
    double net;
} Employee;

// Helper function to safely read strings
void get_clean_string(const char *prompt, char *buffer, size_t size) {
    printf("%s", prompt);
    if (fgets(buffer, size, stdin) != NULL) {
        char *ptr = buffer;
        while (*ptr != '\0') {
            if (*ptr == '\n') {
                *ptr = '\0';
                break;
            }
            ptr++;
        }
    } else {
        buffer[0] = '\0';
    }
}

// 1. Calculate function: Modifies the original struct in memory using a pointer
void calculate_salary(Employee *e) {
    // The arrow operator (->) is used to access struct members through a pointer
    e->hra = 0.20 * e->basic;
    e->da = 0.50 * e->basic;
    e->pf = 0.12 * e->basic;
    e->gross = e->basic + e->hra + e->da;
    e->net = e->gross - e->pf;
}

// 2. Print function: Uses a 'const' pointer so it can read, but never accidentally modify, the data
void print_payslip(const Employee *e) {
    printf("\n----------- PAY SLIP -----------\n");
    printf("ID          : %d\n", e->id);
    printf("Name        : %s\n", e->name);
    printf("Designation : %s\n", e->designation);
    printf("Department  : %s\n", e->department);
    printf("Basic       : %9.2lf\n", e->basic);
    printf("HRA (20%%)   : %9.2lf\n", e->hra);
    printf("DA  (50%%)   : %9.2lf\n", e->da);
    printf("Gross       : %9.2lf\n", e->gross);
    printf("PF  (12%%)   : -%8.2lf\n", e->pf);
    printf("Net Salary  : %9.2lf\n", e->net);
}

int main(void) {
    Employee emp;
    
    printf("Enter employee ID: ");
    if (scanf("%d", &emp.id) != 1) {
        printf("Error: Invalid ID.\n");
        return 1;
    }
    
    // Clear the input buffer
    while (getchar() != '\n');

    get_clean_string("Enter name: ", emp.name, sizeof(emp.name));
    get_clean_string("Enter designation: ", emp.designation, sizeof(emp.designation));
    get_clean_string("Enter department: ", emp.department, sizeof(emp.department));

    printf("Enter basic salary: ");
    if (scanf("%lf", &emp.basic) != 1) {
        printf("Error: Invalid salary.\n");
        return 1;
    }

    // Pass the memory address of 'emp' to the functions
    calculate_salary(&emp);
    print_payslip(&emp);

    return 0;
} */

//Assignment 14 pp2
/* #define MAX_STR 50
#define MAX_EMP 100 // Set a hard limit for the array size

// Expanded struct to hold all financial data
typedef struct {
    int id;
    char name[MAX_STR];
    char designation[MAX_STR];
    char department[MAX_STR];
    double basic;
    double hra;
    double da;
    double pf;
    double gross;
    double net;
} Employee;
// Helper function to safely read strings
void get_clean_string(const char *prompt, char *buffer, size_t size) {
    printf("%s", prompt);
    if (fgets(buffer, size, stdin) != NULL) {
        char *ptr = buffer;
        while (*ptr != '\0') {
            if (*ptr == '\n') {
                *ptr = '\0';
                break;
            }
            ptr++;
        }
    } else {
        buffer[0] = '\0';
    }
}

// Calculates financial components using a pointer
void calculate_salary(Employee *e) {
    e->hra = 0.20 * e->basic;
    e->da = 0.50 * e->basic;
    e->pf = 0.12 * e->basic;
    e->gross = e->basic + e->hra + e->da;
    e->net = e->gross - e->pf;
}

// Prints the formatted slip using a read-only pointer
void print_payslip(const Employee *e) {
    printf("\n----------- PAY SLIP -----------\n");
    printf("ID          : %d\n", e->id);
    printf("Name        : %s\n", e->name);
    printf("Designation : %s\n", e->designation);
    printf("Department  : %s\n", e->department);
    printf("Basic       : %9.2lf\n", e->basic);
    printf("HRA (20%%)   : %9.2lf\n", e->hra);
    printf("DA  (50%%)   : %9.2lf\n", e->da);
    printf("Gross       : %9.2lf\n", e->gross);
    printf("PF  (12%%)   : -%8.2lf\n", e->pf);
    printf("Net Salary  : %9.2lf\n", e->net);
}

int main(void) {
    // Declare an array of structs to hold multiple records
    Employee employees[MAX_EMP];
    int n;

    printf("How many employees do you want to process? (Max %d): ", MAX_EMP);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_EMP) {
        printf("Error: Invalid number of employees.\n");
        return 1;
    }

    // Flush the newline left by the first scanf
    while (getchar() != '\n');

    // 1. Data Collection Loop
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d : ", i + 1);
        
        printf("Enter employee ID: ");
        scanf("%d", &employees[i].id);
        while (getchar() != '\n'); // Flush buffer before fgets

        get_clean_string("Enter name: ", employees[i].name, sizeof(employees[i].name));
        get_clean_string("Enter designation: ", employees[i].designation, sizeof(employees[i].designation));
        get_clean_string("Enter department: ", employees[i].department, sizeof(employees[i].department));

        printf("Enter basic salary: ");
        scanf("%lf", &employees[i].basic);
        while (getchar() != '\n'); // Flush buffer for the next iteration

        // Calculate right after getting the data for this specific index
        calculate_salary(&employees[i]);
    }

    // 2. Data Display Loop
  
    printf("      GENERATED PAY SLIPS       ");
    for (int i = 0; i < n; i++) {
        print_payslip(&employees[i]);
    }

    return 0;
} */

//Assignment 14 pp3
#define MAX_STR 50
#define MAX_EMP 100 
typedef struct {
    int id;
    char name[MAX_STR];
    char designation[MAX_STR];
    char department[MAX_STR];
    double basic;
    double hra;
    double da;
    double pf;
    double gross;
    double tax; 
    double net;
} Employee;
void get_clean_string(const char *prompt, char *buffer, size_t size) {
    printf("%s", prompt);
    if (fgets(buffer, size, stdin) != NULL) {
        char *ptr = buffer;
        while (*ptr != '\0') {
            if (*ptr == '\n') {
                *ptr = '\0';
                break;
            }
            ptr++;
        }
    } else {
        buffer[0] = '\0';
    }
}

// Helper function to calculate tax based on standard Indian tax slabs
double calculate_income_tax(double gross_salary) {
    // Convert monthly gross to estimated annual income for slab calculation
    double annual_income = gross_salary * 12;
    double annual_tax = 0.0;

    // Example Slabs:
    // Up to 3,00,000: Nil
    // 3,00,001 to 6,00,000: 5% on amount over 3L
    // 6,00,001 to 9,00,000: 15,000 + 10% on amount over 6L
    // Above 9,00,000: 45,000 + 15% on amount over 9L
    
    if (annual_income <= 300000) {
        annual_tax = 0.0;
    } 
    else if (annual_income <= 600000) {
        annual_tax = (annual_income - 300000) * 0.05;
    } 
    else if (annual_income <= 900000) {
        annual_tax = 15000 + ((annual_income - 600000) * 0.10);
    } 
    else {
        annual_tax = 45000 + ((annual_income - 900000) * 0.15);
    }

    // Convert the calculated annual tax back to a monthly deduction
    return annual_tax / 12.0;
}

// Calculates all financial components, now including tax
void calculate_salary(Employee *e) {
    e->hra = 0.20 * e->basic;
    e->da = 0.50 * e->basic;
    e->pf = 0.12 * e->basic;
    
    // Calculate gross before applying deductions
    e->gross = e->basic + e->hra + e->da;
    
    // Calculate tax based on the gross salary
    e->tax = calculate_income_tax(e->gross);
    
    // Calculate final net pay
    e->net = e->gross - (e->pf + e->tax);
}

// Prints the formatted slip
void print_payslip(const Employee *e) {
    printf("\n----------- PAY SLIP -----------\n");
    printf("ID          : %d\n", e->id);
    printf("Name        : %s\n", e->name);
    printf("Designation : %s\n", e->designation);
    printf("Department  : %s\n", e->department);
    printf("Basic       : %9.2lf\n", e->basic);
    printf("HRA (20%%)   : %9.2lf\n", e->hra);
    printf("DA  (50%%)   : %9.2lf\n", e->da);
    printf("Gross       : %9.2lf\n", e->gross);
    printf("PF  (12%%)   : -%8.2lf\n", e->pf);
    printf("Income Tax  : -%8.2lf\n", e->tax);
    printf("Net Salary  : %9.2lf\n", e->net);
}

int main(void) {
    Employee employees[MAX_EMP];
    int n;

    printf("How many employees do you want to process? (Max %d): ", MAX_EMP);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_EMP) {
        printf("Error: Invalid number of employees.\n");
        return 1;
    }

    while (getchar() != '\n'); 

    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);
        
        printf("Enter employee ID: ");
        scanf("%d", &employees[i].id);
        while (getchar() != '\n');

        get_clean_string("Enter name: ", employees[i].name, sizeof(employees[i].name));
        get_clean_string("Enter designation: ", employees[i].designation, sizeof(employees[i].designation));
        get_clean_string("Enter department: ", employees[i].department, sizeof(employees[i].department));

        printf("Enter basic monthly salary: ");
        scanf("%lf", &employees[i].basic);
        while (getchar() != '\n'); 

        calculate_salary(&employees[i]);
    }

    printf("      GENERATED PAY SLIPS       ");
    for (int i = 0; i < n; i++) {
        print_payslip(&employees[i]);
    }

    return 0;
}