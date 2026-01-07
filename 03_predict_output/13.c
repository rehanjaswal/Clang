// factorial of n = n x n-1 x n-2 x .... 2 x 1 = 1 x 2 x .... x n-2 x n-1 x n
#include <stdio.h>
int main(void) {
    int n,factorial = 1;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        factorial = factorial * i;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}