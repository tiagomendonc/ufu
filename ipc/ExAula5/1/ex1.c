#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float c, k, f;

    for (c = -10; c <= 100; c++)
    {
        k = c + 273.15;
        f = c * 1.8 + 32;
        printf("Celsius: %.2f\n", c);
        printf("Kelvin: %.2f\n", k);
        printf("Fahrenheit: %.2f\n\n\n\n", f);
    }
    

    return 0;
}