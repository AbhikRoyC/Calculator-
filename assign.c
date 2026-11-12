#include<stdio.h>
// Assignment 6(1)
 /* int main() {
    int a,b;
    printf("Enter two integers: ");
    // 1. Input Validation: Always check if scanf successfully read the expected items
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1; // Exit with an error code
    }
    // using 'else if' instead of nesting an 'if' inside an 'else'
    if(a == b) {
        printf("%d is equal to %d\n", a, b);
    } else if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is less than %d\n", a, b);
    }
    // Always use {} even for single-line statements to prevent bugs
    if (a != b) {
        printf("The numbers are different (a != b).\n");
    }
    if (a >= b) {
        printf("First number is not smaller (a >= b).\n");
    }
    if (a <= b) {
        printf("First number is not greater (a <= b).\n");
    }

    return 0;
    
} 

//Assignment 6(2)
int main() {
    int n;
    int valid_input;
    // A do-while loop is the standard structure for "ask at least once, repeat if invalid"
    do {
        printf("Enter a non-negative integer: ");
        valid_input = scanf("%d", &n);

        // 1. Check if the user typed text instead of a number
        if (valid_input != 1) {
            printf("Error: Invalid input. Number expected.\n");
            // Clear the input buffer to remove the invalid input
            while (getchar() != '\n'); 
            
            n = -1; // Force the loop condition to fail so it asks again
            continue; // Skip the rest of the loop and start over
        }

        // 2. Check if the number is negative
        if (n < 0) {
            printf("Negative value is not accepted. Try again.\n");
        }

    } while (n < 0);

    printf("Accepted value = %d\n", n);
    return 0;
} 

// assignment 7 (1)
 int add(int a, int b) {
    return a + b;
}

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int x, y, n;

    //First Operation: Addition
    printf("Enter two integers: ");
    
    // Validate the first input
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Error: Invalid input. Please enter numbers only.\n");
        return 1; // Exit immediately if input is bad
    }
    
    printf("Sum = %d\n\n", add(x, y));

    //Second Operation: Even/Odd Check
    printf("Enter a single number: ");
    
    // Validate the second input
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        return 1; 
    }
    
    printf(isEven(n) ? "%d is an Even number.\n" : "%d is an Odd number.\n", n);

    return 0;
} */

//Assignment 11(1)
#include <stddef.h>
 /* int main() {
    int a[] = {10,20,30,40,50};
    int size = sizeof(a)/sizeof(a[0]);
    int *ptr = a; // Pointer to the first element of the array
    for(int i=0; i<size; i++) {
        printf("*(ptr+%d)= %d\n", i, *(ptr + i));
    }
    ptr = &a[size - 1]; // Pointer to the last element of the array
    printf("Last element = %d\n", *ptr);
    ptr -= 2; // Move pointer back by 2 elements
    printf("Element two positions before last = %d\n", *ptr);
    // ptrdiff_t calculates the difference in terms of elements, not raw bytes
    ptrdiff_t distance = &a[size - 1] - &a[1];
    printf("Distance from index 1 to end = %td elements\n", distance);
    return 0;
} */
//Assignment 11(2)
 /* int main() {
    unsigned int value = 0X12345678;
    unsigned char *byte = (unsigned char *)&value; // Pointer to the first byte of the integer
    printf("value = 0x%x\n", value);
    for(size_t i=0;i<sizeof(value); i++) {
        printf("Byte[%zu]= 0x%x\n", i, byte[i]);
    }
// Architecture Check: Determine endianness based on the first byte
    if(byte[0]==0x78) {
        printf("Result: Little Endian\n");
    } else if(byte[0]==0x12) {
        printf("Result: Big Endian\n");
    } else  {
        printf("Result: Unknown Endian\n");
    }
    return 0;
} */

// Assignment 8
/* #include<stdlib.h>
unsigned long long factIter(int n) {
    unsigned long long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Recursive Factorial
unsigned long long factRec(int n) {
    return (n <= 1) ? 1 : (unsigned long long)n * factRec(n - 1);
}

// Iterative GCD
int gcdIter(int a, int b) {
    a = abs(a); // Convert inputs to absolute values
    b = abs(b); 
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Recursive GCD
int gcdRec(int a, int b) {
    a = abs(a); // Convert inputs to absolute values
    b = abs(b);
    return (b == 0) ? a : gcdRec(b, a % b);
}

int main(void) {
    int n, a, b;
    
    // 1. Factorial Input Validation & Negative Check
    printf("Enter n for factorial: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Factorial requires a non-negative integer.\n");
        return 1; // Exit cleanly on failure
    }
    
    printf("Iterative factorial = %llu\n", factIter(n));
    printf("Recursive factorial = %llu\n\n", factRec(n));
    
    // 2. GCD Input Validation
    printf("Enter two integers for GCD: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Error: Invalid input. Please enter numbers only.\n");
        return 1;
    }
    
    printf("Iterative GCD = %d\n", gcdIter(a, b));
    printf("Recursive GCD = %d\n", gcdRec(a, b));
    
    return 0;
} 
// Assignment 9
//call by value
 void swapbyvalue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("[Inside swapByValue] a=%d, b=%d\n", a, b);
}
//call by reference
void swapbyreference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("[Inside swapbyReference] a=%d, b=%d\n", *a, *b);
}
int main() {
    int x,y;
    printf("Enter two integers : ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Error: Invalid input. Please enter numbers only.\n");
        return 1;
    }
    printf("Main variables: x=%d, y=%d\n", x, y);
    swapbyvalue(x,y);
    printf("After swapByValue: x=%d, y=%d\n", x, y);
    swapbyreference(&x,&y);
    printf("After swapByReference: x=%d, y=%d\n", x, y);
    return 0;
} 
// Assignment 10 
int main() {
    int i=25;
    float f=12.5f;
    char c='C';
    int *pi = &i;
    float *pf = &f;
    char *pc = &c;
    printf("int value =%d, address = %p, pointer = %p, dereferenced = %d\n",
           i, (void*)&i, (void*)pi, *pi);
    printf("float value =%f, address = %p, pointer = %p, dereferenced = %f\n",
           f, (void*)&f, (void*)pf, *pf);
    printf("char value =%c, address = %p, pointer = %p, dereferenced = %c\n",
           c, (void*)&c, (void*)pc, *pc);
           *pi = 100;
            printf("Modified Integer through pointer: %d\n", i);
    return 0;
} */

//Assignment 12
#include<string.h>
/* int main() {
    // 1. Const Correctness: Lock down strings that shouldn't change
    const char course[] = "Programming in C";
    const char  institute [] = {'S','I','T','\0'}; // Null-terminated character array
    char name[50];
    printf("Enter your name: ");
    // 2. Use fgets instead of scanf to safely read strings with spaces
    if(fgets(name, sizeof(name), stdin) != NULL) {
        //Strip the trailing newline character if present
        name[strcspn(name , "\n")]=0;
    } else {
        name[0] = '\0'; // Ensure name is empty if input fails
    }
printf("Student Records : \n");
    printf("Name : %s\n", name);
    printf("Course : %s\n", course);
    printf("Institute : %s\n", institute);

    printf("Characters in course : \n");
    for(const char *ptr = course; *ptr != '\0'; ptr++) {
        printf("%c ", *ptr);
    }
    printf("\n");
    return 0;

} */

//Assignment 13
#include<ctype.h>
// Helper function to count the number of vowels in a string
/* int countvowels(const char s[]) {
    int count = 0;
    for(int i=0; s[i] != '\0'; i++) {
        // Convert to lowercase for uniformity
        char ch = (char)tolower((unsigned char)s[i]);
        if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}
// Helper function to safely read a string and strip the newline character
void getclearstring(const char* prompt, char *buffer, size_t size) {
    printf("%s", prompt);
    if(fgets(buffer, size, stdin) != NULL) {
        // Replace the trailing newline with a null terminator
        buffer[strcspn(buffer, "\n")] = '\0';
    } else {
        buffer[0] = '\0'; // Ensure the buffer is empty if input fails
    }
}
int main() {
    char s1[100], s2[200];
    // Size must accommodate s1, s2, the space in between, and the null terminator (100+100+1+1=202)
    char combined[202];
    //Get Input
    getclearstring("Enter first string: ", s1, sizeof(s1));
    getclearstring("Enter second string: ", s2, sizeof(s2));

    //Output Lengths
    printf("Length of first string: %zu\n", strlen(s1));
    printf("Length of second string: %zu\n", strlen(s2));

    //Output Vowel Counts
    printf("Vowels in first string: %d\n", countvowels(s1));
    printf("Vowels in second string: %d\n", countvowels(s2));

    // Compare the strings
    if(strcmp(s1, s2) == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }
    // snprintf prevents buffer overflows by enforcing a strict memory limit
    snprintf(combined, sizeof(combined), "%s %s", s1, s2);
    printf("Combined string: %s\n", combined);
    return 0;
} */

// Assignmment 14
// Use a standardized macro for maximum string lengths
#define MAX_STR 50
typedef struct {
    int id;
    char name[MAX_STR];
    char designation[MAX_STR];
    char department[MAX_STR];
    double basic;
} Employee;
// Helper function to safely read strings and strip the newline character
void get_clean_string(const char *prompt, char *buffer, size_t size) {
    printf("%s", prompt);
    if (fgets(buffer, size, stdin) != NULL) {
        // Pointer arithmetic approach to remove the newline without relying on <string.h>
        char *ptr = buffer;
        while (*ptr != '\0') {
            if (*ptr == '\n') {
                *ptr = '\0';
                break;
            }
            ptr++;
        }
    } else {
        buffer[0] = '\0'; // Handle input failure safely
    }
}
int main(void) {
    Employee e;
    
    // Read the integer ID first
    printf("Enter employee ID: ");
    // Always check if scanf succeeded to prevent infinite loops on bad input
    if (scanf("%d", &e.id) != 1) {
        printf("Error: Invalid ID entered.\n");
        return 1;
    }
    
    // Clear the dangling newline left by scanf before using fgets
    while (getchar() != '\n');

    // Use the helper function to safely read strings
    get_clean_string("Enter name: ", e.name, sizeof(e.name));
    get_clean_string("Enter designation: ", e.designation, sizeof(e.designation));
    get_clean_string("Enter department: ", e.department, sizeof(e.department));

    // Read the double salary
    printf("Enter basic salary: ");
    if (scanf("%lf", &e.basic) != 1) {
        printf("Error: Invalid salary entered.\n");
        return 1;
    }
    // Salary Calculations
    // House Rent Allowance (20% of basic)
    double hra = 0.20 * e.basic; 
    // Dearness Allowance (50% of basic)
    double da = 0.50 * e.basic;  
    // Provident Fund deduction (12% of basic)
    double pf = 0.12 * e.basic;  
    
    double gross = e.basic + hra + da;
    double net = gross - pf;

    // Display formatted Pay Slip
    printf("ID          : %d\n", e.id);
    printf("Name        : %s\n", e.name);
    printf("Designation : %s\n", e.designation);
    printf("Department  : %s\n", e.department);
    printf("Basic       : %9.2lf\n", e.basic);
    printf("HRA (20%%)   : %9.2lf\n", hra);
    printf("DA  (50%%)   : %9.2lf\n", da);
    printf("Gross       : %9.2lf\n", gross);
    printf("PF  (12%%)   : -%8.2lf\n", pf); // Indicate it is a deduction
    printf("Net Salary  : %9.2lf\n", net);
    return 0;
}