#include <stdio.h>
/*print Fahrenheit-Celsius tabel
 for fahr = 0, 20, ....., 300*/

 int main(int argc, char const *argv[])
 {
    int fahr , celsius;
    int lower , upper, step; 

    lower = 0; /*lower limit if temperature scale*/
    upper = 300; /*upper limit*/
    step = 20 ;/*step size*/

    fahr  = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    
 }
 