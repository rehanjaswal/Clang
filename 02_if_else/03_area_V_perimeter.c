#include <stdio.h>
int main () {
    float l,b,A,P;
    printf("Enter length: ");
    scanf("%f",&l);
    printf("Enter breadth: ");
    scanf("%f",&b);
    A = l*b;
    P = 2*(l+b);
    printf("area = %f \n",A);
    printf("perimeter = %f \n",P);
    if (A>P) {
        printf("area is greater than the perimeter");
    }
    if (A<P) {
        printf("Perimeter is greater than the area");
    }
    if (A==P) {
        printf("Area is equal to the Perimeter");
    }
    return 0;
}