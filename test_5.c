/*WAP to calculate a student's result based on two examinators, 
one sport event, and three activities conducted the weightage 
of activities =30%,sport=20%* and examination = 50%*/

#include<stdio.h>
int main()
{
	float e1, e2, s, a1, a2, a3, marks;
	printf("\n Enter Sports Marks : ");
	scanf("%f", &s);
	printf("\n Enter Activities Marks : ");
	scanf("%f %f %f", &a1, &a2, &a3);
	printf("\n Enter Examination Marks : ");
	scanf("%f %f", &e1, &e2);
	marks = (0.2+s+0.3*(a1+a2+a3)+0.5*(e1+e2));
	printf("\n Total Marks is %0.2f", marks);
	return 0;
}


