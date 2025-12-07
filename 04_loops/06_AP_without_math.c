///ap 4 7 10 13....n
#include <stdio.h>
int main(void) {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int x = 4;
    for (int i=1;i<=n;i++) {
        printf("%d ",x) ;
        x = x + 3 ;
    }

    return 0;
}