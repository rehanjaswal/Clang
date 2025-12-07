#include<stdio.h>
int main () {
    int p;
    printf("enter percentage: ");
    scanf("%d",&p);

    if (p>90 && p<101) {
        printf("A+ grade \n");
    }
    else if (p>100) {
        printf("Invalid Input");
    }
    else if (p>80) {
        printf("A grade \n");
    }
    else if (p>70) {
        printf("B grade \n");
    }
    else if (p>60) {
        printf("C Grade \n");
    }
    else if (p>50) {
        printf("D grade \n");
    }
    else if (p>40) {
       printf("L Grade \n");
    }
    else {
        printf("FAIL \n");
    }
    return 0;
}