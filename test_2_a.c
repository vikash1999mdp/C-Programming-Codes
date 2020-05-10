//WAP to change Centigrade to Fahrenheit
#include <stdio.h>
int main()
{
    float c, f;
    printf("\n Enter Temp. in degree celcius : ");
    scanf("%f", &c);
    f = 1.8*c+32;
    printf("\n Temp. in degree Fahrenheit is : %0.2f", f);
    return 0;
}
