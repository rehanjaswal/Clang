#include <stdio.h>
int main(void) {
    int i,n;
    printf("enter a number: ");
    scanf("%d",&n);
    for (i=1;i<11;i++) {
        printf("%d X %d = %d\n",n,i,n*i);
    return 0;
}