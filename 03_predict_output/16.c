// wap to write all ascii values and their equivalent characters if 26 alphabets (uppercase)

#include <stdio.h>
int main(void) {
    for (int i =65;i<=90;i++) {
        char ch = (char)i;
        printf("%c -->",ch);
        printf(" %d\n",i);
    }
    return 0;
}