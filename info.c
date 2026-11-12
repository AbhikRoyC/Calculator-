/* Write a program to check whether a given character is Alphabet or not
using if else statement */
#include <stdio.h>

/*int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
} */

// Create a Basic Arithmetic calculator using switch case with basic operators (+,-,*,/,%)

/* int main(void) {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            // Modulo requires integer operands
            if ((int)num2 != 0) {
                int modResult = (int)num1 % (int)num2;
                printf("%d %% %d = %d\n", (int)num1, (int)num2, modResult);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
} */

// Find the sum of natural numbers(positive numbers) using do..while loop.
/* int main(void) {
    int limit;
    int sum = 0;
    int i = 1;

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &limit);
        
        if (limit <= 0) {
            printf("Invalid input. Please enter a positive integer greater than 0.\n");
        }
    } while (limit <= 0); // Keep prompting until a positive integer is entered
    do {
        sum += i;  
        i++;       
    } while (i <= limit);

    printf("The sum of natural numbers from 1 to %d is: %d\n", limit, sum);

    return 0;
} */

//Calculate the Average of Marks of a Trainee using Single Dimensional Arrays.
/*int main(void) {
    int num_subjects;
    float sum = 0.0f;
    float average;

    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    if (num_subjects <= 0) {
        printf("Error: Number of subjects must be greater than 0.\n");
        return 1;
    }

    // Declare a single-dimensional array sized dynamically to the number of subjects
    float marks[num_subjects];

    // Loop to collect input and calculate the running sum
    for (int i = 0; i < num_subjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i]; // Add each entered mark to the total sum
    }

    // Calculate the average by dividing the total sum by the number of elements
    average = sum / num_subjects;

    printf("Total Marks: %.2f\n", sum);
    printf("Average Marks: %.2f\n", average);
    return 0;
} */

// Entering elemnents of a matrix and finding transpose of a matrix using 2D arrays.
/* int main(void) {
    int rows, cols;
    int matrix[10][10];
    int transpose[10][10];

    // 1. Enforce the size constraint using a do-while loop
    do {
        printf("Enter the number of rows and columns (1 to 9): ");
        scanf("%d %d", &rows, &cols);
        
        if (rows >= 10 || cols >= 10 || rows <= 0 || cols <= 0) {
            printf("Error: Values must be strictly less than 10 and greater than 0.\n");
        }
    } while (rows >= 10 || cols >= 10 || rows <= 0 || cols <= 0);

    // 2. Collect matrix elements from the user
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // 3. Display the original matrix
    printf("Original Matrix is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    // 4. Compute the transpose by swapping indices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 5. Display the transposed matrix
    printf("Transpose of the Matrix is: \n");
    // Notice that the outer loop now runs to 'cols' and inner to 'rows'
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

// Assignmment 1 Question 1
/* int main(void) {/
    float base_amount, maintenance, monthly_rent, yearly_rent, tax, total_paid;

    // 1. Get the base amount and maintenance charges from the user
    printf("Enter the base rent amount: ");
    scanf("%f", &base_amount);

    printf("Enter the maintenance charges: ");
    scanf("%f", &maintenance);

    // 2. Incorporate maintenance into the monthly rent and calculate the yearly total
    monthly_rent = base_amount + maintenance;
    yearly_rent = monthly_rent * 12;

    // 3. Determine the tax bracket based on the 1 lakh threshold
    if (yearly_rent > 100000) {
        tax = 1500;
    } else {
        tax = 350;
    }

    // 4. Calculate the final total to be paid
    total_paid = yearly_rent + tax;

    // 5. Display the results
    printf("Rent Calculation is : \n");
    printf("Monthly Rent (incl. maintenance): Rs. %.2f\n", monthly_rent);
    printf("Yearly Rent: Rs. %.2f\n", yearly_rent);
    printf("Tax Amount: Rs. %.2f\n", tax);
    printf("Total Amount to be Paid: Rs. %.2f\n", total_paid);

    return 0;
} */

//Assignment 2
/* int main(void) {
    printf("Odd numbers between 1 and 100:\n");
    
    // Starting at 1 and incrementing by 2 mathematically guarantees only odd numbers
    for (int i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    return 0;
} */

//Assignment 3
/* int main() {
    int i, j;
    int rows = 5; // The pattern has 5 rows

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print the '+' characters
        for (j = 1; j <= i; j++) {
            printf("+");
        }
        // Move to the next line after printing all '+' for the current row
        printf("\n");
        // Print an extra empty line as shown in the expected output
        printf("\n");
    }

    return 0;
} */

//Assignment 4
/* int main(void) {
    int n, taken;

    // Set the initial size of the box
    printf("Enter the initial number of chocolates in the box: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The box is already empty!\n");
        return 0;
    }

    // Loop continues as long as there are chocolates remaining
    while (n > 0) {
        printf("Kid took (enter amount): ");
        scanf("%d", &taken);

        // Input validation to ensure logical deduction
        if (taken <= 0) {
            printf("Please enter a valid amount greater than 0.\n");
            continue;
        }
        
        if (taken > n) {
            printf("Not enough chocolates! The kid takes the remaining %d.\n", n);
            taken = n; // Adjust to prevent negative chocolates
        }
        // Deduct the requested amount
        n -= taken; 
        
        // Print the exact required status message
        printf("Chocolates left on box: %d\n\n", n);
    }

    return 0;
} */

// Assignment 5
/* int main(void) {
    int a[2][2], b[2][2];
    int add[2][2], sub[2][2], mul[2][2];

    // 1. Collect the first matrix
    printf("Enter elements of the first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 2. Collect the second matrix
    printf("Enter elements of the second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // 3. Compute Addition, Subtraction, and Multiplication simultaneously
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // Addition and Subtraction are direct element-to-element operations
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
            
            // Multiplication requires the dot product of rows and columns
            mul[i][j] = 0; // Initialize the slot to 0 before accumulating
            for (int k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 4. Display the results
    printf("\n--- Addition ---\n");
    for (int i = 0; i < 2; i++) {
        printf("%d\t%d\n", add[i][0], add[i][1]);
    }
    printf("\n--- Subtraction ---\n");
    for (int i = 0; i < 2; i++) {
        printf("%d\t%d\n", sub[i][0], sub[i][1]);
    }

    printf("\n--- Multiplication ---\n");
    for (int i = 0; i < 2; i++) {
        printf("%d\t%d\n", mul[i][0], mul[i][1]);
    }

    return 0;
} */

// Write a program in C to sort an array in ascending order using Pointer.
#include <stdlib.h>

// Function to sort the array using strict pointer arithmetic
/* void sortArray(int *ptr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Dereference the pointers at specific offsets to compare actual values
            if (*(ptr + j) > *(ptr + j + 1)) {
                // Swap the values in physical memory
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main(void) {
    int n;

    // 1. Read the first value to determine the array size
    printf("Enter the number of elements, followed by the elements:\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Array size must be positive.\n");
        return 1;
    }

    // 2. Dynamically allocate exactly enough memory for 'n' integers
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 3. Populate the array using the address-of pointer offset (arr + i)
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i)); 
    }

    // 4. Pass the pointer to the sorting algorithm
    sortArray(arr, n);

    // 5. Print the sorted array by dereferencing the pointer offsets
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // 6. Release the memory back to the system
    free(arr);
    
    return 0;
} */

//Function Assignment 1
/* int checkPrime(int n) {
    // 1 and negative numbers are not prime by definition
    if (n <= 1) {
        return 0;
    }
    // 2 and 3 are prime numbers
    if (n == 2 || n == 3) {
        return 1;
    }
    // Eliminate multiples of 2 and 3 to optimize the loop
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    // We start at 5 and increment by 6 because primes > 3 are of the form 6k +/- 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; 
        }
    }
    
    return 1; 
}
int main(void) {
    int num;

    printf("Enter an integer to check if it is a prime number: ");
    scanf("%d", &num);

    // Call the function and interpret the return value
    if (checkPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }

    return 0;
} */

//Write a C program to find out maximum and minimum of some integer values using function 
/* void findMaxMin(int *arr, int size, int *max, int *min) {
    // Initialize both to the first element's value
    *max = arr[0];
    *min = arr[0];

    // Traverse the array to find actual max and min
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Dereference and overwrite with new max
        }
        if (arr[i] < *min) {
            *min = arr[i]; // Dereference and overwrite with new min
        }
    }
}

int main(void) {
    int n, max, min;

    // 1. Read the number of integers to be inputted
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Number of elements must be strictly positive.\n");
        return 1;
    }

    // 2. Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 3. Populate the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 4. Pass the array, its size, and the memory addresses of max and min
    findMaxMin(arr, n, &max, &min);

    // 5. The values of max and min have now been updated by the function
    printf(" Results : \n");
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    free(arr);
    return 0;
}
 */

 // Write a program to count total number of letters,digits and special character in a program .
 /* int main(void) {
    char str[200];
    int letters = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    // fgets is used instead of scanf to safely read spaces and prevent buffer overflows
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        // Iterate through the array using pointer arithmetic or bracket notation
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            
            // Check for alphabets (both uppercase and lowercase)
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                letters++;
            } 
            // Check for numerical digits
            else if (str[i] >= '0' && str[i] <= '9') {
                digits++;
            } 
            // Everything else (including spaces and punctuation) is a special character
            else {
                special++;
            }
        }
    }
    printf("Results : ");
    printf("Total Letters: %d\n", letters);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special);

    return 0;
} */

//Program to store the details of employees using structure and display the details of employees.
#include <string.h>
// 1. Define the Structure
struct EmployeeStruct {
    char name[50];
    int id;
    char gender;
    float salary;
};

// 2. Define the Union
/* union EmployeeUnion {
    char name[50];
    int id;
    char gender;
    float salary;
};

int main() {
    // Array of 5 structures to hold multiple employees at once
    struct EmployeeStruct emp[5]; 
    union EmployeeUnion u_emp;

    printf("Using Structure : \n");
    // Collect details for 5 employees using the structure
    for(int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:c\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("Employee Details (Structure) : \n");
    for(int i = 0; i < 5; i++) {
        printf("Name: %s, ID: %d, Gender: %c, Salary: %.2f\n", 
               emp[i].name, emp[i].id, emp[i].gender, emp[i].salary);
    }
    
    // Demonstrate memory sizes
    printf("Memory Comparison : \n");
    printf("Size of EmployeeStruct: %lu bytes\n", sizeof(struct EmployeeStruct));
    printf("Size of EmployeeUnion: %lu bytes\n", sizeof(union EmployeeUnion));

    // Demonstrate Union data overwriting
    printf("Using Union (Demonstrating Overwrite) : \nß");
    strcpy(u_emp.name, "John");
    printf("Union Name: %s\n", u_emp.name);
    
    u_emp.id = 101; 
    // Writing to 'id' corrupts 'name' because they share the same memory space
    printf("Union ID: %d\n", u_emp.id);
    printf("Union Name after writing ID (Corrupted): %s\n", u_emp.name); 

    return 0;
} */

// Write a program in C to find the sum of the elements of a dynamically created array.
#include <stdlib.h>
/* int main(void) {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Array size must be positive.\n");
        return 1;
    }

    // Request a contiguous block of memory on the Heap
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        // Read input directly into the calculated memory offset
        scanf("%d", (arr + i)); 
        
        // Dereference the pointer to add the value to the running total
        sum += *(arr + i);      
    }

    printf("Results : \n");
    printf("Sum of all elements: %d\n", sum);

    // Release the memory back to the system to prevent memory leaks
    free(arr);

    return 0;
} */

// Write a program in C to find the number of lines in a Text File.
int main(void) {
    FILE *fp;
    char ch;
    int lines = 0;
    // Open the specified text file in read mode
    fp = fopen("Study.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file 'Study.txt'.\n");
        return 1;
    }
    // Read character by character until End of File (EOF)
    while ((ch = fgetc(fp)) != EOF) {
        // Increment the counter every time a newline character is encountered
        if (ch == '\n') {
            lines++;
        }
    }
    // Close the file stream
    fclose(fp);

    printf("Total number of lines in the file: %d\n", lines);
    return 0;
}