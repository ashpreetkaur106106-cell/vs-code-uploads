#include <stdio.h>
#include <string.h>

int main()
{

    char name[50];

    scanf("%s", name);

    int start = 0;
    int end = strlen(name) - 1;

    int isPalandrome = 1;

    while (start < end)
    {
        if (name[start] == name[end])
        {
            start++;
            end--;
        }
        else
        {
            isPalandrome = 0;
            break;
        }
    }
    if (isPalandrome == 1)
    {
        printf("It is a palandrome.\n");
    }
    else
    {
        printf("It is not a palandrome.\n");
    }

    return 0;
}