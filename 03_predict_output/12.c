// find sum of 1-2+3-4+5-6+.......upto n terms

#include <stdio.h>
int main(void) {
    int n, sum = 0;
    printf("enter a number: ");
    scanf("%d",&n);
    // for (int i=1;i<=n;i++) {
    //     if (i%2==0) sum = sum - i;
    //     else sum = sum + i;
    // }
    // printf("the sum of the series upto %d terms is %d",n,sum);

    //  METHOD 2 
    // (1-2)+(3-4)+(5-6)+... consecutive numbers are getting paired to give -1
    // if n is even then sum is -n/2
    // if n is odd then sum is -n/2 + n

    for (int i=1;i<=n;i++) {
        if(n%2==0) sum = -n/2;
        else sum = -n/2 + n;
    }
    printf("the sum of the series upto %d terms is %d",n,sum);
    return 0;
}