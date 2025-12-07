// printing even numbers from 1 to 100
// #include <stdio.h>
// int main(void) {
//     for (int i=1;i<101;i++) {
//         if (i%2==0) {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// printing odd
// #include <stdio.h>
// int main(void) {
//     for (int i=1;i<101;i=i+1) printf("%d ",i);
//     return 0;
// }

// OR
#include <stdio.h>
int main(void) {
    for (int i=1;i<101;i++) {
        if (i%2!=0) printf("%d ",i);
    }
    return 0;
}