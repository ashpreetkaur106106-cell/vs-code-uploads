#include <stdio.h>

int main() {
    char letter;
    printf("Enter any letter.\n");
    scanf("%c", &letter);
    
    if (letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U') {
        printf("It is a vowel");
    }else {
        printf("It is a consonant.");
    }
}