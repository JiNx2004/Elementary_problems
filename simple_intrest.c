#include<stdio.h>  
int main()   
    {   
        float p , r , t , simple_intrest ;
        printf("Enter principal amount: ");
        scanf("%f",&p);
        printf("Enter rate per annum: ");
        scanf("%f",&r);
        printf("Enter time: ");
        scanf("%f",&t);  
        simple_intrest  = (p*r*t)/100;   
        printf(" Simple Interest is : %f", simple_intrest);  
        return (0);  
    } 