#include<stdio.h>
int main() {
    float x;
    printf("Enter a decimal number: ");
    scanf("%f",&x);
    int y = x;
    printf("The integral part of the decimal number you entered is %d\n",y);
    float z = x - y ;
    printf("The fractional part of the decimal number you entered is %f",z);
    return 0;
}