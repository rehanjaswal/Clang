#include<stdio.h>
int main() {
    float radius;
    float pi = 3.1415;
    printf("Enter radius of sphere: ");
    scanf("%f",&radius);
    float Volume = 4 * pi * radius * radius * radius / 3 ;
    printf("The Volume of sphere is: %f",Volume);
    return 0;
}