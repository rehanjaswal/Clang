#include<stdio.h>
int main () {
    int a,b,c;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("enter 3rd number: ");
    scanf("%d",&c);
    
    if (a>b) {   // b is out of game
        if (a>c) {
            printf("%d is greatest",a);
        }
        else {   // a<c
            printf("%d is greatest",c);
        }
    }
    else {      // a<b -> a is out of the game
        if (b>c) {
            printf("%d is greatest",b);
        }
        else {   // c>b
            printf("%d is greatest",c);
        }

    }
}