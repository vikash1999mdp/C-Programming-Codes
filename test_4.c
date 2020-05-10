//WAP to calculate the distace between two points
#include <stdio.h>
#include <math.h>
int main()
{
	float x1, x2, y1, y2, dist;
	printf("\n Enter First Point Coordinates : ");
	scanf("%f %f", &x1, &y1);
	printf("\n Enter Second Point Coordinates : ");
	scanf("%f %f", &x2, &y2);
	dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("\n Total distance is %0.2f", dist);
	return 0;
}
