#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Interchange:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\nAfter Interchange:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    getch();
}
