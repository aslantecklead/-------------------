#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	printf("\n Enter: ");
	char n[128];
	int i;
	i=0;
	scanf_s("%s", n,128);
	while (n[i] != 0)
	{
		if (n[i] == '?') n[i] = '!';
		i++;
	}
	printf(n);
}
	