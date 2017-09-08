#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* list one word each line */
main(){
    int c, state;
    state = OUT;
    
    while ((c = getchar()) != EOF){
        if (state == IN){
            if (c == ' ' || c == '\n' || c == '\t'){
                putchar('\n');
                state = OUT; 
            }
            else{
                putchar(c);
            }
        }
        else if (state == OUT){
            if (c != ' ' || c != '\n' || c != '\t'){
                putchar(c);
                state = IN;
            }
        }
    }
}
