#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 5 elements to insert in the array.\n");

    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Your array is: [ ");
    for (int i=0; i<5; i++)
    { printf("%d  ", arr[i]);
    }printf("]\n");

    printf("Enter the element you want to add in the end of the array.\n");
    scanf("%d", &arr[5]);

    printf("Your new array is : [ ");
    for(int i=0; i<6; i++) {
        printf("%d ", arr[i]);
    }printf("]\n");
    return 0;
}