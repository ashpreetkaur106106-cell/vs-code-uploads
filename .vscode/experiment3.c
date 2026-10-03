#include <stdio.h>

int main()
{

    float a, b;
    printf("Enter two integers (a and b): ");
    scanf("%f %f", &a, &b);
    printf("a = %.2f, b = %.2f\n\n", a, b);

    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float quotient = a / b;  

    int c=a;
    int d=b;
    int remainder = c % d;

    printf("a + b = %.2f\n", sum);
    printf("a - b = %.2f\n", difference);
    printf("a * b = %.2f\n", product);
    printf("a / b = %.2f\n", quotient);
    printf("a %% b = %d\n\n", remainder);

    int isGreater = (a > b);
    int isLess = (a < b);
    int isGreaterEqual = (a >= b);
    int isLessEqual = (a <= b);
    int isEqual = (a == b);
    int isNotEqual = (a != b);

    printf("a > b  : %d\n", isGreater);
    printf("a < b  : %d\n", isLess);
    printf("a >= b : %d\n", isGreaterEqual);
    printf("a <= b : %d\n", isLessEqual);
    printf("a == b : %d\n", isEqual);
    printf("a != b : %d\n\n", isNotEqual);

    
    int cond1 = (a > 10); 
    int cond2 = (b > 10); 

    int logicalAnd = (cond1 && cond2); 
    int logicalOr = (cond1 || cond2); 
    int logicalNot = !cond1;

    printf("Condition 1 (a > 10): %d\n", cond1);
    printf("Condition 2 (b > 10): %d\n", cond2);
    printf("cond1 && cond2: %d\n", logicalAnd);
    printf("cond1 || cond2: %d\n", logicalOr);
    printf("!cond1: %d\n\n", logicalNot);

    int max_value = (a > b) ? a : b;

    printf("The larger value between a and b is: %d\n", max_value);

    return 0;
}
