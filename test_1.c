#include <stdio.h>
int main()
{
	float a, b, c, res;
	printf("\n Enter First Number : ");
	scanf("%f", &a);
	printf("\n Enter Second Number : ");
	scanf("%f", &b);
	printf("\n Enter Third Number : ");
	scanf("%f", &c);
	res = (a+b+c)/3;
	printf("\n Your Result is %f", res);
	return 0;
}
