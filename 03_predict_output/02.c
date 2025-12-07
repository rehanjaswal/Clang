#include<stdio.h>
int main () {
    int x = 10, y,z;
    x = y = 7;
    z = x < 8;
    printf("The final values of x,y and z are %d, %d and %d repsectively.",x,y,z);
}