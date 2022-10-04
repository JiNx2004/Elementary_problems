#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , last_digit , second_last , mul ;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a>0)
    {
        last_digit=a%10;
        a=a/10;
        second_last=a%10;
        mul=(second_last*last_digit);
        printf("Multiplcation of last and second last digit = %d",mul);
    }
    else{
        printf("Enter number greater than 0 !");
    }
    return 0;

    
    

}