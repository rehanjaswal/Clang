#include <stdio.h>
int main(void) {
    int i, a = 100;
    for (i=1;i<=32;i=i++) {
        printf("%d ",a);
        a = a-3 ;
    }
    return 0;
}