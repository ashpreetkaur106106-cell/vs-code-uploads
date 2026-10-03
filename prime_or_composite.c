#include <stdio.h>
#include <math.h>

void checkPrime(int n)
{

    int a = sqrt(n);
    for (int i = 2; i <= a; i++)
    {
        if (n % i == 0)
        {
            printf("It is a prime number.\n");
            break;
        }
        printf("It is a composite number.");
    }
}

int main()
{
    int n;
    printf("Enter a number to check if it is prime or composite. \n");
    scanf("%d", &n);
    checkPrime(n);
    return 0;
}