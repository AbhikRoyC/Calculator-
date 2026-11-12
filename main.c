#include <stdio.h>
/* int main(){
    printf("Hello World \n");
}*/

/* int main() {
    int age;
    printf("Enter you age - ");
    scanf("%d", &age);
    printf("Age is - %d", age);
}*/

/* void namaste();
void bonjour();
int main(){
    printf("Enter 'f' for french & 'i' for indian - ");
    char ch;
    scanf("%c", &ch);
    if(ch == 'i') {
        namaste();
    } else{
        bonjour();
    }
    return 0;
}
void namaste() {
    printf("Namaste Bhaisab/Behenji \n");
}
void bonjour() {
    printf("Bonjour monsieur/madame \n");
} */

// Print sum of two numbers
/* int sum(int a, int b);
int main() {
    int a,b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    int s= sum(a,b);
    printf("sum is %d /n", s);
    return 0;
}
int sum(int x, int y) {
    return x+y;
} */

// Print table of a number
/* void printTable(int n);
int main() {
    int n;
    printf("Enter a Number - ");
    scanf("%d", &n);

    printTable(n);
    return 0;
}

void printTable(int n) {
    for(int i=1 ; i<= 10 ; i++){
        printf("%d \n", i*n);
    }

} */

// Print final price 
/* void printPrice(float value);

int main() {
    float value = 100.0;
    printPrice(value);
    printf("Value is %f\n" , value);
    return 0;
}
void printPrice(float value) {
    value = value + (0.18 * value);
    printf("final price is : %f\n", value);
}*/

//use library function to calculate the square of a number
/* int main() {
    int n=4;
    printf("%f", pow(n,2));
}*/

//write functions to calculate area of square, rectangle & circle
/* float square(float side);

float circle(float rad);
float rect(float a, float b);

int main(){
    float a=5.0;
    float b=4.0;
    printf("area is : %f" , rect(a,b));
}
float square(float side){
    return side*side;
}
float circle(float rad){
    return 3.14*rad*rad;
}
float rect(float a, float b){
    return a*b;
} */

//Recursion, Example - Print hello world 5 times
/*void printHW(int count);

int main() {
    printHW(5);
    return 0;
}
void printHW(int count) {
   if(count == 0) {
    return;
   }
    printf("Hello World! \n");
    printHW(count-1);
} */

//print sum of first n natural numbers using recursion
/* int sum(int n);
int main(){
    printf("Sum is : %d \n ", sum(5));
}
int sum(int n) {
    if(n==1){
        return 1;
    }
    int sumNm = sum(n-1);
    int SumN = sumNm + n;
    return SumN;
}*/

//print factorial of a number
/* int fact(int n);
int main(){
    printf("Factorial is : %d \n", fact(5));
}
int fact(int n){
    if(n == 0){
        return 1;
    }
    int factnum = fact(n-1);
    int factn = factnum * n;
    return factn;
}*/

//calculate % of a student
/* int Percent(int science, int maths, int english);
int main() {
    int sc = 81;
    int math = 82;
    int english = 92;
    printf("Percentage is : %d \n", Percent(sc, math, english));
    return 0;
}
int Percent(int science, int maths, int english) {
    return ((science + maths + english)/3);
} */

//print fibonacci series 
/* int fib(int n);

int main(){
    printf("%d \n", fib(6));
}
int fib(int n){
        if(n == 0) {
        return 0;
        }
        if(n == 1){
            return 1;
        }
    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int fibN = fib1 + fib2;
    return fibN;
}*/

/* int main () {
    int a= 25, b= 5;
    printf("a & b : %d \n", a&b ); // Bitwise AND
    printf("a|b : %d \n", a|b); //Bitwise OR
    printf("a^b : %d \n", a^b); // Bitwise XOR
    printf("~a : %d \n", ~a); //one's complement -(n-1)
    printf("a >> b : %d\n", a>>b); //Bitwise right shift
    printf("a<<b : %d \n", a<<b); //Bitwise left shift
    return 0;
} */

/* int main(){
    int num1, num2, max;
    printf("Enter Two Integers : ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1:num2;
    printf("Maximum value is : %d\n", max);
    return 0;

} */

/* int main() {
    int a= 40;
    if(a==10) {
        printf("Value of a is 10 \n");
    }
    else if(a==20) {
        printf("Value of a is 20 \n");
    }
    else if(a==30) {
        printf("Value of a is 30 \n");
    }
    else {
        printf("none of the values is matching\n");
    }
    printf("Exact value of a is: %d\n", a);
    return 0;
} */
/* int main() {
    int a = 100;
    int b = 200;
    if(a==100 && b==200) {
        printf("Value of a is 100 and value of b is 200 \n");
    }
    printf("Exact value of a is: %d\n", a);
    printf("Exact value of b is: %d\n", b);
    return 0;
} */

/* int main() {
    int var = 18;
    switch(var) {
        case 15:
        printf("You are a kid \n");
        break;
        case 18:
        printf("Eligible for voting \n");
        break;
        default:
        printf("Default case is executed \n");
        break;
    }
    return 0;
}*/

// Pointers
/* int main() {
    int age = 22;
    int *ptr = &age;
    // address 
    // printf("%p", &age);
    printf("%u \n", &age);
    printf("%u \n", ptr);
    printf("%u\n", &ptr);
    return 0;
} */

/* int main() {
    int i;
    int *ptr;
    
    ptr = &i;
    *ptr = 0;
    
    printf("i = %d\n", i);
    
    return 0;
} */


