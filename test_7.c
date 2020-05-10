// WAP to prepare a gocery bill
#include <stdio.h>
int main()
{
	int name, quantity;
	float price, amount;
	printf("\n Enter the name of the iteam purchased : ");
	scanf("%d", &name);
	printf("\n Enter the quantity of the iteam purchased : ");
	scanf("%d", &quantity);
	printf("\n Enter the price of the iteam purchased : ");
	scanf("%f", &price);
	amount = quantity*price;
	printf("\n ******************************BILL*******************************");
	printf("\n ITEAM          QUANTITY              PRICE                 AMOUNT");
	printf("\n %d                %d                  %0.2f                 %0.2f", name, quantity, price, amount);
	printf("\n Total amount to be paid = %.2f", amount);
	printf("\n -----------------------------------------------------------------");
	return 0;
}
