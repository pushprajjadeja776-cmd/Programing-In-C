#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, temp;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Interchange:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    temp = a;
    a = b;
    b = temp;

    printf("\n\nAfter Interchange:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    getch();
}
