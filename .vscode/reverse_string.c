#include <stdio.h>
#include <string.h>

int main()
{

    char name[50];

    fgets(name, sizeof(name), stdin);

    int i = 0;

    while (name[i] != '\0' && name[i] != '\n')
    {
        i++;
    }

    int end = i-1;

    for (int j = 0; j < i; j++)
    {
        printf("%c", name[end]);
        end--;
    }

    return 0;
}