#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char helper_rod)
{

    // base cacse
    if (n == 1)
    {
        printf("\nMove disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }

    towerOfHanoi(n - 1, from_rod, helper_rod, to_rod); 
    printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n - 1, helper_rod, to_rod, from_rod);
    
}

int main()
{
    int n;
    printf("Enter the number of disks you want to have in the game.\n");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}