// print all odd numbers from 1 to 100

#include <stdio.h>
int main(void) {
    // for(int i=1;i<=100;i++) {
    //     if(i%2!=0) printf("%d ",i);
    // }

    for(int i=1;i<101;i++) {
        if(i%2==0) {
            continue;
        }
        printf("%d ",i);
    }

    return 0;
}