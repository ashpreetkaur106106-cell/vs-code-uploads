#include <stdio.h>

int fibonacci(int n)
{

    // base case
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    int ans = fibonacci(n - 1) + fibonacci(n - 2);

    return ans;
}

int main()
{

    int n;
    printf("Enter number.\n");
    scanf("%d", &n);

    printf("Fibonacci series of %d numbers is as follows:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}