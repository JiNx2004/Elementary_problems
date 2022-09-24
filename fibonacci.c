#include <stdio.h>
int main()
{
    //Recursion is a better approach
    
    int count, first_term = 0, second_term = 1, next_term,i ;
    printf("Enter the number of terms: ");
    scanf("%d", &count);

    printf("First %d terms of Fibonacci series: ", &count);
    for (i = 0; i < count; i++)
    {
        if (i <= 1)
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        printf("%d",next_term);
    }
    return 0;
}
