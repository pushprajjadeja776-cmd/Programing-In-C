#include <stdio.h>
#include <conio.h>

void main()
{
    float l, b, area;

    clrscr();

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter breadth: ");
    scanf("%f", &b);

    area = l * b;

    printf("\nArea of Rectangle = %.2f", area);

    getch();
}
