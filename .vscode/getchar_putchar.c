#include <stdio.h>

int main() {
    char c, d;
    c=getchar();
    while (getchar() != '\n'); 
    d=getchar();
    printf("The charater that you first entered is ");
    putchar(c);
    printf("\nThe charater that you second entered is ");
    putchar(d);
    return 0;
}

//int c; charactejr- alphabets, special characters, numbers (only one digit)a,b