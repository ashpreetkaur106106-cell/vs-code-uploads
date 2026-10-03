#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number to store in 'num'.\n");
    scanf("%d", &num);
    printf("The number stored in num is: %d\n", num);

    getchar(); 

    int ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
}