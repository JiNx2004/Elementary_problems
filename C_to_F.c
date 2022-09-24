#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temp in fahrenheit : ");
    scanf("%f", &fahrenheit);
    celsius = ((5*(fahrenheit-32))/9);
    printf("%f fahrenheit = %f celsius", fahrenheit, celsius);
}