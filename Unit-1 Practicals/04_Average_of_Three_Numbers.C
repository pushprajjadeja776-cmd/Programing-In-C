#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, c, average;

    clrscr();

    printf("Enter three values: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("Average = %.2f", average);

    getch();
}
