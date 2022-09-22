#include <stdio.h>
int main(){
    float a,circ,area;
    printf("Enter radius of circle : ");
    scanf("%f",&a);
    circ=(2*(3.14)*a);
    area=((3.14)*a*a);
    printf("Circumference = %.2f ", circ);
    printf("Area = %.2f ", area);
    return 0;

}
