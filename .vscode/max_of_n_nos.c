#include <stdio.h>

int max(int tnumber) {
    int num, max_num;
    printf("Enter number 1: ");
    scanf("%d", &max_num);
    
    for (int i=2; i<=tnumber; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num>max_num) {
            max_num=num;
        }
    }
    return max_num;
}

int main() {
    int tnumber; 
    printf("Enter the amount of numbers you want to compare: ");
    scanf("%d", &tnumber);
    
    if (tnumber>1) {
        printf("The maximum number is %d", max(tnumber));
    }else {
        printf("Please enter a valid positive number.");
        
    }
}