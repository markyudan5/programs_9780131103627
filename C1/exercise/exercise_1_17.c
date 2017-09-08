#include <stdio.h>

#define MAXLINE 1000

int my_getline(char target[], int maxlen);

/* Print all input lines that are longer than 80 characters */
main(){
    int len;
    char line[MAXLINE];
    
    while ((len = my_getline(line, MAXLINE) > 0)){
        if (len > 80){
            printf("%s", line);
        }
    }
    return 0;
}
/* my getline */
int my_getline(char target[], int maxlen){
    int c, i;

    for (i = 0; i < maxlen - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        target[i] = c;
    if (c == '\n'){
        target[i] = c;
        ++i;
    }
    target[i] = '\0';
    return i;
}

