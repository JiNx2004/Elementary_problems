#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d;
    printf("Enter three sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/2;
    printf("Area of triangle = %.2f ", sqrt(d*(d-a)*(d-b)*(d-c)));
}