//  wap to print reverse of a number       

//  1234 reverse 4321 

#include <stdio.h>

int main(void) {
    int n, temp, reverse = 0;
    printf("enter a number: ");
    scanf("%d", &n);
     temp = n;   // copy original

    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp = temp / 10;
    }
    printf("the reverse of %d is %d", n, reverse);
    return 0;
}
