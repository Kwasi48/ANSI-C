#include <stdio.h>
/*print Celsius - Fahrenheit tabel
 for cel = 0, 20, ....., 300*/

 int main()
 {
    float fahr , celsius;
    float lower , upper, step; 

    lower = 0; /*lower limit if temperature scale*/
    upper = 300; /*upper limit*/
    step = 20 ;/*step size*/

    celsius  = upper;
    printf("----------  Celsius to Fahrenheit Converter  ------------\n");
    while (celsius >= lower){
        fahr =  32.0 + (9.0 / 5.0 *(celsius));
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }
    
 }
 