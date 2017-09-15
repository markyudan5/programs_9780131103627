#include <stdio.h>

#define SPACES 4
#define MAXLINE 1000
/*
 * replace tabs with n blanks to space to the next tab stop.
 */
void detab();
int main(){
    
    detab();
    return 1;
}
void detab(){
    char new[MAXLINE];
    int c;
    int index = 0;

    while ((c = getchar()) != EOF){
        printf("index:%d\n", index);
        if (c == '\t'){
            int i;
            for (i = 0; i < SPACES; ++i){
                new[index + i] = ' ';
            }
            index = index + i + 1;
        }
        else{
            new[index] = c;
            printf("%c, %d\n", new[index], index);
            printf("in loop%s\n", new);
            ++index;
        }
    } 
    new[index] = '\0';
    printf("final index:%d\n", index);
    printf("%s\n", new);
}
