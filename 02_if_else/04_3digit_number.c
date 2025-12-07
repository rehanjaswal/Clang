// take integer input, wap to identify if integer is three digit or not
#include<stdio.h>
int main () {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    
    if (n>99 && n<1000) {
        printf("%d is a three digit number",n);
    }
    else {
        printf("%d is NOT a three digit number",n);
    }
}