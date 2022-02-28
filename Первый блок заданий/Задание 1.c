#include <stdio.h>
#include <conio.h>

int main()
{
    int  a = 0; int  b = 0;
    int  inc = 0;
    int  Res = 0;

    printf("\nEenter the first multiplier:  "); scanf_s("%d", &a);
    printf("\nEenter the second multiplier:  "); scanf_s("%d", &b);

    while (inc != b)
    {
        Res += a;
        ++inc;
    }
    printf("Outpur is:  %d", Res++);
    return 0;
}