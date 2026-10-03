
#include <stdio.h>

int main()
{
    int atm;
    printf("Enter the number directed against the function you want to do.\n"
           "Cash Withdraw--1\nCash Deposit--2\nView Balance--3\nExit--4\n");
    scanf("%d", &atm);

    int balance = 50000;

    switch (atm)
    {
    case 1:
    {
        int wd;
        printf("Enter the amount you want to withdraw.\n");
        scanf("%d", &wd);

        if (wd <= balance && wd > 0)
        {
            int nbalance = balance - wd;
            printf("The amount was successfully withdrawn.\nNew Balance=%d\n", nbalance);
        }
        else
        {
            printf("Amount was not able to withdraw. Not enough money in the Bank Account.\nCurrent Balance=%d\n", balance);
        }
        break;
    }

    case 2:
    {
        int dp;
        printf("Enter the amount you want to deposit.\n");
        scanf("%d", &dp);

        if (dp > 0)
        {
            printf("The amount was successfully deposited.\nNew Balance=%d\n", dp + balance);
        }
        else
        {
            printf("Error in deposit. Please enter a valid amount.\n");
        }
        break;
    }

    case 3:
    {
        printf("Current Balance in Account=%d\n", balance);
        break;
    }

    case 4:
    {
        printf("Successfully exited.\n");
        break;
    }

    default:
        printf("An error occurred. Please Enter a valid number.\n");
        break;
    }

    return 0;
}