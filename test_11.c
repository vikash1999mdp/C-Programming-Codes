#include <stdio.h>
int main()
{
	int a, b, c;
	printf("\n Enter First number : ");
	scanf("%d", &a);
	printf("\n Enter Second number : ");
	scanf("%d", &b);
	printf("\n Enter Third number : ");
	scanf("%d", &c);
	if(a>b)
	{
		if(a>c) printf("\n %d is the largest number", a);
		else printf("\n %d is the largest number", c);
	}
	else printf("\n %d is the largest number", b);
	return 0;
}
