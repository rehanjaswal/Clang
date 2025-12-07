#include<stdio.h>
int main () {
    int x1,x2,y1,y2,x3,y3,m1,m2,m3;
    printf("Enter first ordered pair of coordinates (x1,y1): ");
    scanf("%d %d", &x1,&y1);                                                                         
    printf("Enter second ordered pair of coordinates (x2,y2): ");
    scanf("%d %d", &x2,&y2);
    printf("Enter third ordered pair of coordinates (x3,y3): ");
    scanf("%d %d", &x3,&y3);
    m1 = (y2-y1)/(x2-x1);     // L1_L2
    m2 = (y3-y2)/(x3-x2);    // L2_L3      
    m3 = (y3-y1)/(x3-x1);     // L1_L3 r

    if (m1==m2 && m2==m3 && m3==m1) {
        printf("(%d,%d), (%d,%d) and (%d,%d) fall on a straight line", x1,y1,x2,y2,x3,y3);
    }
    else {
        printf("(%d,%d), (%d,%d) and (%d,%d) do NOT fall on a straight line", x1,y1,x2,y2,x3,y3);
    }     
}