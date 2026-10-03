// 1, 1, 2, 3, 5, 8, 13....
#include <stdio.h>

void fibonacci()
{

    int last = 1;
    int second_last = 1;

    int n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1");
    }
    else if (n == 2)
    {
        printf("1 1");
    }
    else if (n > 0)
    {
        printf("1 1 ");
        for (int i = 3; i <= n; i++)
        {
            int current = 0;
            current = last + second_last;
            printf("%d ", current);
            second_last = last;
            last = current;
        }
    }
}

int main()
{

    fibonacci();

    return 0;
}
