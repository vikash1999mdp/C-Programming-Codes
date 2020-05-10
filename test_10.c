#include <stdio.h>
int main()
{
	int year;
	printf("\n Ente any year :");
	scanf("%d", &year);
	if (year%4==0)
	{
		if(year%100==0)
		printf("\n This is not a leap year");
		else 
		printf("\n This is a leap year");
	}
	else
	printf("\n This is not a leap year");
	return 0;
}
