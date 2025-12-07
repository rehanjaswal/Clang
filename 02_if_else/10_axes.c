#include<stdio.h>
int main() {
    int x,y;
    printf("enter x and y coordinates (x,y) : ");
    scanf("%d %d", &x,&y);
    
    if (x==0 && y==0) {
        printf("(%d,%d) lies on the origin",x,y);
    }
    else if (x==0) {
        printf("(%d,%d) lies on the y axis",x,y);
    }
   else if (y==0) {
        printf("(%d,%d) lies on the x axis",x,y);
    }
    else {
        printf("(%d,%d) does not lie on x or y axis",x,y);
    }
} 