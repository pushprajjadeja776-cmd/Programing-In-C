#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, c, avg;

    clrscr();

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("\nAverage = %.2f", avg);

    getch();
}
