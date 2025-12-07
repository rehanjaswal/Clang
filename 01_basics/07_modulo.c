#include <stdio.h>
int main () {
    int a,b,r;
    printf("Enter dividend: ");        // a > b
    scanf("%d",&a);
    printf("Enter divisor: ");    
    scanf("%d",&b);
    r = a % b;                   
    printf("The remainder when %d is divided by %d is %d",a,b,r);
    return 0;
}
int main 
