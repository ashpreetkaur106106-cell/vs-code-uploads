#include <stdio.h>
#include <string.h>

void lowerCase(char array[]){

    for (int i=0; i<strlen(array); i++) {
        if (array[i]>='A' && array[i]<='Z') {
            int dist= array[i] - 'A';
            array[i]= 'a' + dist;
        }
    }

}

int countVowels(char array[]) {

    lowerCase(array);

    int count=0;
    int end =strlen(array);
    for (int i=0; i<end; i++) {
        if (array[i] == 'a' || array[i]== 'e' || array[i] =='i' || array[i] == 'o' || array[i] == 'u') {
            count++;
        }
    }

    return count;
}

int countConsonants(char array[]) {
    lowerCase(array);

    int count=0;
    int end =strlen(array);

    for(int i=0; i<end; i++) {
        if (array[i] >'a' && array[i] <='z' && array[i] != 'e' && array[i] != 'i' && array[i] != 'o' && array[i] != 'u') {
            count++;
        }
    } return count;
}

int main()
{

    char name[50];

    fgets(name, sizeof(name), stdin);

    printf("The number of vowels in this sentence is/are %d\n", countVowels(name));
    printf("The number of consonants in this sentence is/are %d\n", countConsonants(name));


    
    return 0;
}