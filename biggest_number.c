#include <stdio.h>

int main() {

  int a,b,c;

  printf("Enter three different numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b && a > c)
    printf("%d is the largest number.", a);

  else if (b> a && b > c)
    printf("%d is the largest number.", b);

  else //(c > a && c > b)// ;
    printf("%d is the largest number.", c);

}


