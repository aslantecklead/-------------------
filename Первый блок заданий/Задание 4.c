#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);
	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		printf("\n Такой треугольник может быть");
		if ((c * c == a * a + b * b) || (a * a == c * c + b * b) || (b * b == a * a + c * c))
		{
			printf("\nПрямоугольный");
		}
		else printf("\nРавнобедренный");
	}
	else printf(" Невозможно ");
	return 0;
}