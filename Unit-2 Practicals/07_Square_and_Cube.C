#include <stdio.h>
#include <conio.h>

void main()
{
    int n, square, cube;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;
    cube = n * n * n;

    printf("\nSquare = %d", square);
    printf("\nCube = %d", cube);

    getch();
}
