#include <stdio.h>
int main()
{
    char c;
    printf("enter the character to check : ");
    scanf("%c", &c);
    if (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u')
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}
