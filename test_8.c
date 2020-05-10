#include <stdio.h>
int main()
{
	int year;
	printf("\n Enter your age : ");
	scanf("%d", &year);
	if (year>=18)
	printf("\n You are eligible to vote");
	else 
	printf("\n You are not eligible to vote");
	return 0;
}
