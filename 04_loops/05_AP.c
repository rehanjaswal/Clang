// AP 1 3 5 7..... upto n terms    nth term = 2n - 1
#include <stdio.h>
int main(void) {
    int i,n;
    printf("enter a number: ");
    scanf("%d",&n); 
    for (i=1;i<=2*n-1;i=i+2) {        // dont ever write 2n cuz its 2*n and its not i++, cuz common diff is 2
        printf("%d ",i);
    }
    return 0;
}

