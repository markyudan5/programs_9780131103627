#include <stdio.h>
main(){
    int c;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            while (c == ' ' && c != EOF){
                c = getchar();
            }
            putchar(' ');
            putchar(c);
        }
        else{
            putchar(c);
        }
    }
}
