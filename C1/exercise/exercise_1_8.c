#include <stdio.h>

main(){
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;
    int c;

    while ((c = getchar()) != EOF){
        if (c == ' ')
            blanks++;
        if (c == '\t')
            tabs++;
        if (c == '\n')
            newlines++;
    }
    printf("blanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, newlines);
}
