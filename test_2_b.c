//WAP to change Fahrenheit to Centigrade
#include <stdio.h>
int main()
{
    float c, f;
    printf("\n Enter Temp. in degree Fahrenheit : ");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("\n Temp. in  is : %0.2f", c);
    return 0;
}
