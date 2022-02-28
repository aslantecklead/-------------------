#include <iostream>

int main() {
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("Enter an array element %d: ", i + 1);
		scanf_s("%d", &arr[i]);
		printf(" ");
	}

	int even = 0;
	int odd = 0;

	for (int i = 0; i <=10; i++)
	{
		if ((arr[i] % 2) == 0)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
	printf("Number of even %d: ", even);
	printf("Number of odd %d: ", odd);
}