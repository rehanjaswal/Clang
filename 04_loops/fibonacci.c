// 1   1   2   3   5   8   13   21   34   ...
// 1   2   3   4   5   6    7    8    9
// fib(1) = 1 = fib(2)
// fib(3) = fib(2) + fib(1)          fib(4) = fib(3) + fib(2)
//  fib(n) + fib(n-1) + fib(n-2) ; n>=2

#include <stdio.h>
int main(void) {
    int n, a = 1, b = 1,fib;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=n-2;i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    printf("the fibonacci of %d is %d",n,fib);
    
    return 0;
}