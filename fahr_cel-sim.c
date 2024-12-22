#include <stdio.h>

#define LOWER 0   /*lower limit of table or upper*/
#define UPPER 300 /*upper limit or lower */
#define STEP  20  /* step size*/

/* print Fahrenheit-Celsius table but simplified*/

int main(int argc, char const *argv[])
{
    int fahr; 
    /*Modified to print in reverse*/
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * fahr-32);
}
