#include <stdio.h>

int fact(int n) {

    //base case
    if (n==0 || n==1) {
        return 1;
    }

    //recursive formula..?
    int ans = n * fact(n-1);

    return ans;
}

int main() {
    int n;
    printf("Enter the number whose factorial you want.\n");
    scanf("%d", &n);

    int result= fact(n);

    printf("Its factorial is %d\n", result);

    return 0;
}