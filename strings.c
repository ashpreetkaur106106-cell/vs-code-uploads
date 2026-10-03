#include <stdio.h>
#include <strings.h>

void isVowel(int n, char string[n]) {
    int count=0;

    for(int i=0; i<strlen(string); i++) {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U') {
            count++;
        }
    }

    printf("The number of vowels in the line is: %d\n", count);
}

void isConsonant(int n, char string[n]) {
    int count=0;

    for(int i=0; i<strlen(string); i++) {
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z')) {
            if(!(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')) {
                count++;
            }
        }
    }

    printf("The number of consonants in the line is: %d\n", count);
}


void lowerCase(int n, char string[n]) {
    for(int i=0; i<strlen(string); i++) {
        if(string[i]>='A' && string[i]<='Z') {
            int difference = string[i] - 'A';
            string[i] = 'a' + difference;
        }
    }
}

int main() {
    char str[50];

    printf("Enter the line you want to store in the string.\n");
    fgets(str, sizeof(str), stdin);

    int count=0;

    isVowel(strlen(str), str);
    
    isConsonant(strlen(str), str);

    lowerCase(strlen(str), str);
    printf("The string in lower case is: %s", str);

    return 0;
}