#include <stdio.h>
#include <conio.h>

void main()
{
    float r, area;

    clrscr();

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("\nArea of Circle = %.2f", area);

    getch();
}
