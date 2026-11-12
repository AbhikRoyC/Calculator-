#include<stdio.h>
/* int main(){
    int age;
    printf("Enter Age - ");
    scanf("%d", &age);
    if(age>=18) {
        if(age>=60){
            printf("Eligible to vote (Senior Citizen) \n");
        } else {
            printf("Eligible to vote \n");
        }
    }
    else{
        printf("Not Eligible to vote (Under Age) \n");
    }
    

    return 0;
    
}*/
/* int main(){
    int num;
    for (num =5; num<10; num++) {
        printf("%d \n", num);
    }
    printf("Done\n");
    return 0;
}*/
/* int addnumbers(int a, int b);
int main(){
    int num1 = 5;
    int num2 = 10;
    int sum;
    sum = addnumbers(num1,num2);
    printf("Sum is : %d \n", sum);
    return 0;
}
int addnumbers(int a, int b) {
    int result = a+b;
    return result;
} */
/* int max(int num1, int num2);
int main() {
    int a;
    int b;
    int ret;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);
    ret = max(a,b);
    printf("Maximum is : %d \n", ret);
    return 0;
}
int max(int num1, int num2) {
    int result;
    if(num1>num2)
    result = num1;
    else
    result = num2;
    return result;
}*/
/* void swap(int x, int y);
int main(){
    int a = 100;
    int b = 200;
    printf("Before Swap, value of a : %d \n", a);
    printf("Before Swap, value of b : %d \n", b);
    // calling a function to swap the values.
    swap(a,b);
    printf("After Swap, value of a : %d \n", a);
    printf("After Swap, value of b : %d \n", b);    
    return 0;
}
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}*/
/* int add(int a, int b){
    return a+b;
}
int multiply(int a, int b){
    return a*b;
}
void execute_operation(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    printf("The Result: %d\n", result);
}*/

/* int main(){
    static int x = 5;
    x=x+1;
    printf("Value of x : %d \n", x);
    x=x+1;
    printf("Value of x : %d \n", x);
    x=x+1;
    printf("Value of x : %d \n", x);
return 0;
} */
/* void printRev(const char *str) {
    if (*str == '\0') {
        return; // Base case: end of string
    }
    printRev(str + 1); // Recursive call with the next character
    putchar(*str); // Print the current character after the recursive call
}
int main() {
    char text[] = "Hello Aarushi";
    printf("Original String: %s\n", text);
    printf("Reversed String: ");
    printRev(text); 
    printf("\n");
    return 0;
} */

/* int main() {
    int i=10;
    int *ptr;
    ptr = &i;
    printf("%p \n", ptr);
    printf("%d\n", *ptr);
    *ptr = 20;
    printf("%d \n", i);
    return 0;
} */

/* int main() {
    int score = 95;
    int *ptr_score = &score; // Pointer to the score variable
    // printing the variable's value and its address
    printf("Score: %d\n", score);
    printf("Address of score: %p\n", (void*)&score);

    // printing the pointer's value (address it holds) and the value it points to
    printf("Pointer value (address it holds): %p\n", (void*)ptr_score); 
    return 0;
} */

/* int main() {
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Numbers in the array is : \n" );
    for(int i=0; i<10; i++) {
        printf("%d \n", num[i]);
    }
    return 0;
} */

/* int main() {
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = num; // Pointer to the first element of the array

    printf("Numbers in the array : \n");
    for(int i=0; i<10; i++) {
        printf("%d \n", *(ptr + i)); 
    }
    return 0;
} */

/* int main() {
    unsigned int value = 0X12345678;
    unsigned int *p = &value;
    unsigned char *byte = (unsigned char *)p;
    printf("value = 0X%X\n", value);
    for(size_t i=0 ; i<sizeof(value); i++) {
        printf("byte[%zu] = 0X%X\n", i, byte[i]);
    }
    return 0;
} */

/* int main() {
    int matrix1[2][3]= {{1,2,3},{4,5,6}};
    int matrix2[3][2]= {{1,2},{3,4},{5,6}};
    int result[2][2] = {{0,0},{0,0}};
    // multipjying matrix1 and matrix2
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Result of matrix multiplication is : \n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ", result[i][j]); 
        }
    }
    return 0;
} */

/* int main() {
    char name[50];
    printf("Enter a word or sentence: ");
    char character = 0;
    char word = 1;
    char vowels = 0;
    if(fgets(name,sizeof(name),stdin)!= NULL) {
        for(int i=0; name[i] != '\0'; i++) {
            if(name[i] != ' ') {
                character++;
                if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
                   name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') {
                    vowels++;
                }
            } else {
                word++;
            }
        }
    }
    printf("Character count: %d\n", character);
    printf("Word count: %d\n", word);
    printf("Vowel count: %d\n", vowels);
    return 0;
} */
int main() {
    char arr[] = "hello";
    arr[0] = 'H';
    printf("%s \n", arr);
    return 0;
}