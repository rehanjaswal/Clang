// swap numbers without using a third variable
#include <stdio.h>
int main() {
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    a = a + b;
    b = a - b; // b = a + b - b = a
    a = a - b; // a = a + b - a = b
    printf("the swapped value of a is %d\n",a);
    printf("the swapped value of b is %d\n",b);
    return 0;
}