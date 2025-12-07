// wap to know if divisible by 5 and 3

#include<stdio.h>
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%15==0) {
        printf("%d is divisible by 5 and 3",n);
    }
    else {
        printf("%d is not divisble by 5 and 3",n);
    }
}
