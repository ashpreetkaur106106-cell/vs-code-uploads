#include <stdio.h>

int hcf(int num1, int num2)
{

    int result = 1;

    int min_num = (num1 > num2) ? num2 : num1;
    {

        for (int i = 1; i <= min_num; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                result = i;
            }
        }
    }

    return result;
}

int lcm()
{

    int num1, num2;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);

    int hcf_answer = hcf(num1, num2);

    int lcm_answer = (num1 * num2) / hcf_answer;

    return lcm_answer;
}

int main()
{
    printf("LCM of the two numbers is %d\n", lcm());

    return 0;
}