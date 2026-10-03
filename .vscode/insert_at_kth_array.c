#include <stdio.h>

void insertAnElement()
{

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

    printf("Enter the element you want to insert in the array.\n");
    scanf("%d", &element);

    int posn;
    printf("Enter the position at which you want to add the element.\n");
    if (scanf("%d", &posn) > n || posn <= 0)
    {
        printf("Not possible :)");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == posn - 1)
        {
            copyArr[posn - 1] = element;
        }
        else
        {
            copyArr[i] = arr[i];
        }
    }

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