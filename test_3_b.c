//WAP a progam to Swap two numbers without using third variable
#include <stdio.h>
int main()
{
	int x, y;
	printf("\n Enter First Number : ");
	scanf("%d", &x);
	printf("\n Enter Second Number : ");
	scanf("%d", &y);
	x=x+y; y=x-y, x=x-y;
	printf("\n First number is : %d", x);
	printf("\n Second number is : %d", y);
	return 0;
}
