#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Enter two numbers : ");
    scanf("%d %f", &a, &b);

    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float quotient = a / b;

    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}