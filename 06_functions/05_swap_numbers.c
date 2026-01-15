#include <stdio.h>
int main() {
    int a,b,temp;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("the swapped value of a is %d\n",a);
    printf("the swapped value of b is %d\n",b);
    return 0;
}