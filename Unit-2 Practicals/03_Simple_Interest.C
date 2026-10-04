#include <stdio.h>
#include <conio.h>

void main()
{
    float p, r, t, si;

    clrscr();

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Number of Years: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("\nSimple Interest = %.2f", si);

    getch();
}
