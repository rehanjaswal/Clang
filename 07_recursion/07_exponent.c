#include <stdio.h>
int exponent(int a, int b) {
    if (b == 0) return 1;
    return a * exponent(a,b-1);                        // a to the power of b is a * a to the power b-1
} 
int main() {
    int a,b;
    printf("enter base: ");
    scanf("%d",&a);
    printf("enter power: ");
    scanf("%d",&b);
    // int expo = exponent(a,b);
    printf("%d raised to the power %d is %d",a,b,exponent(a,b));   // i can write this directly in the print statement too! learned something new 
    return 0;
}