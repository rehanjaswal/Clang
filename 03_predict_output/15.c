// wap to find number raised to power of another number
// a to the power b means a x a x a x .... b times
#include <stdio.h>
int main(void) {
    int a, b, power = 1;
    printf("enter base: ");
    scanf("%d",&a);
    printf("enter power: ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++) {
        power = power * a;
    }
    printf("%d raised to the power %d is %d",a,b,power);
    return 0;
}