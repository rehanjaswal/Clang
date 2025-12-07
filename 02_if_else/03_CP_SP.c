// if cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

#include <stdio.h>
int main () {
    float cp, sp;
    printf("Enter Cost Price: ");
    scanf("%f",&cp);
    printf("Enter Selling Price: ");
    scanf("%f",&sp);

    if (sp>cp) {
        printf("Profit");
    }
    else {
        printf("Loss");
    }
}
