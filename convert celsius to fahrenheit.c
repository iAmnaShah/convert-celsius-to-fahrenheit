#include<stdio.h>
float temp_fahrenheit();
void main()
{
    float fahrenheit;
    int temp;

    fahrenheit = temp_fahrenheit();

    return 0;
}

float temp_fahrenheit()
{
    int temp=0;
    float f;
    for(temp=0; temp<=100; temp++)
    {
        f = temp*9/5+32;
        printf("C = %d     F = %.1f\n",temp,f);
    }
    return f;
}
