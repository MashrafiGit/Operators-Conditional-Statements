#include<stdio.h>
int main ()
{
    int a = 17;
    int b = 5;

    // summation
    int sum = a + b;
    printf("summation = %d\n", sum);
    
    // subtraction
    int sub = a - b;
    printf("subtraction = %d\n", sub);
    
    // multiplication
    int mul = a * b;
    printf("multiplication = %d\n", mul);
    
    // Both a and b are integers.
    // If we divide a by b directly (a / b), the result will be an integer (the decimal part will be lost).
    // To get the correct decimal result, we convert 'a' to float before division.
    float div = (float)a / b;
    printf("division = %.1f\n", div);
    
    // modulus
    int rem = a % b;
    printf("reminder = %d\n", rem);
    
    return 0;
    
}
