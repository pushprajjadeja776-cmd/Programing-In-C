#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i;
    int first = 0, second = 1, next;

    clrscr();

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            next = first;
        else if (i == 2)
            next = second;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    getch();
}
