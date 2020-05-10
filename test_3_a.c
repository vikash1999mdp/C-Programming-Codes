//WAP to Swap to numbers using third variable
#include <stdio.h>
int main()
{
	int x, y, z;
	printf("\n Enter First Number : ");
	scanf("%d", &x);
	printf("\n Enter Second Number : ");
	scanf("%d", &y);
	z=x; x=y; y=z;
	printf("\n First number is : %d", x);
	printf("\n Second number is : %d", y);
	return 0;
}
