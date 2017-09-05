#include <stdio.h>

/* print Celsius-Fahrenheit table */

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("===Celsius-Fahrenheit table===\n");
    
    while(celsius <= upper){
        fahr = celsius / (5.0 / 9.0) + 32.0;
        printf("%6.0f %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
