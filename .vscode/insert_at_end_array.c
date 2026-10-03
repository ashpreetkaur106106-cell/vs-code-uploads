#include <stdio.h>

void insertAnElement()
{

    // array={1,2,3} element to add at the end 5:
    int n;

    printf("Enter the number of elements in array.\n");

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid syntax.");
        return;
    }

    int arr[n];
    int copyArr[n + 1];

    printf("Enter the elements in the array.\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;

    printf("Enter the element you want to insert at the end of the array.\n");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        copyArr[i] = arr[i];
    }

    copyArr[n] = element;

    printf("The new array is:\n[ ");

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", copyArr[i]);
    }
    printf("]");
}

int main()
{
    insertAnElement();
}