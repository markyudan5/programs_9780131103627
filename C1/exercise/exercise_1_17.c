#include <stdio.h>

#define MAXLINE 1000

int my_getline(char target[], int maxlen);

/* Print all input lines that are longer than 80 characters */
main(){
    int len;
    char line[MAXLINE];
    int c, i;
    i = 0;

    while ((c = getchar()) != EOF && i < (MAXLINE - 1)){
        if (c != '\n')
            line[i] = c;
            ++i;
        if (c == '\n'){
            if (i > 5){
                line[i] = '\n';
                line[i + 1] = '\0';
                printf("%s\n", line);
                i = 0;
            }
            else{
                i = 0;
            }
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
    if (i > 8){
        printf("length > 80\n");
        printf("%s", target);
    }
    return i;
}

