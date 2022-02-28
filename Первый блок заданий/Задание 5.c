#include <stdio.h>
#include <conio.h>

int main()
{
    int num, deg;
    int res;
    
    printf("\nEenter the number:  "); scanf_s("%d", &num);
    printf("\nEenter the power:  "); scanf_s("%d", &deg);

    res = 1;

    for (int i = 0; i < deg; i++) {
        res = num * num;
    }

    printf("Outpur is:  %d", res);
    return 0;
}