#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n<0) {
        n = n * (-1) ;    // if n is negative, make it positive 
    }
    printf("The Absolute Value of the entered integer is %d",n);
    return 0;
}