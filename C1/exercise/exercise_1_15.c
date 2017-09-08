#include <stdio.h>
int ftc(int fahr);

main(){
    int fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper){
        printf("%d\t%d\n", fahr, ftc(fahr));
        fahr = fahr + step;
    }
    return 0;
}

int ftc(int fahr){
    return 5 * (fahr - 32) / 9;
}
