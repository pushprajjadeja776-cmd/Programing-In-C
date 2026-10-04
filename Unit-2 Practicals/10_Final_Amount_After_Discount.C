#include <stdio.h>
#include <conio.h>

void main()
{
    float quantity, price, discount, amount, final_amount;

    clrscr();

    printf("Enter quantity: ");
    scanf("%f", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    amount = quantity * price;
    final_amount = amount - (amount * discount / 100);

    printf("\nTotal Amount = %.2f", amount);
    printf("\nFinal Amount = %.2f", final_amount);

    getch();
}
