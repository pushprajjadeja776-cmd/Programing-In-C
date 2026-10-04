#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    clrscr();

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);

    if (b != 0)
    {
        printf("\nDivision = %d", a / b);
        printf("\nModulus = %d", a % b);
    }
    else
    {
        printf("\nDivision and Modulus not possible");
    }

    getch();
}
