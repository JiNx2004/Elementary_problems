#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	double a, b;
	while (1) {
		printf("Enter an operator (+, -, *, /), if you want to exit press n: ");
		scanf(" %c", &ch);
		
		if (ch == 'n')
			exit(0);
		printf("Enter first and second number: ");
		scanf("%lf %lf",&a,&b);
		switch (ch) {
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;
		default:
			printf("Error! please write a valid operator\n");
		}
	}
}
