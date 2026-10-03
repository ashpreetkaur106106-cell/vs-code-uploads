#include <stdio.h>

int sum(int n) {

    //base case
    if (n==1) {
        return 1;
    }
    if (n==0) {
        return 0;
    }

    int ans = n + sum(n-1);

    return ans;
}

int main() {
    
    int n;
    printf("Enter number.\n");
    scanf("%d", &n);

    int result= sum(n);

    printf("Sum on %d natural numbers is %d\n", n, result);

    return 0;
}