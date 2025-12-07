#include<stdio.h>
int main() {
    while('a'<'b') {       // 97<98 (ascii values mate), always true --> infinite loop2
        printf("malayalam is a palindrome\n");
    }
}