#include <stdio.h>

#define MAXLINE 1000

int append(char to[], char from[], int to_len, int from_len);

/* Print all input lines that are longer than 80 characters */
main(){
    int len;
    char temp_line[MAXLINE];  // temporary line 
    char lines[MAXLINE]; // store qualified lines
    int c, i;
    int lines_len;
    i = 0;
    lines_len = 0;

         
    while ((c = getchar()) != EOF && i < (MAXLINE - 1)){
        if (c == '\n' && i >= 5){
            temp_line[i] = '\0';
            lines_len = append(lines, temp_line, lines_len, i);
            i = 0;
        }
        else if (c == '\n' && i < 5){
            i = 0;
        }
        else{
            temp_line[i] = c;
            ++i;
        }
    } 
    lines[++lines_len] = '\0';
    printf("%s", lines);
    for (int j = 0; j < lines_len; ++j){
        putchar(lines[j]);
    }
    putchar('\n');
    printf("%s", lines);
    return 0;
}
int append(char to[], char from[], int to_len, int from_len){
    int i = to_len + 1;
    int j = 0;
    to[i] = '\n';
    ++i;
    while((to[i] = from[j]) != '\0'){
        ++i;
        ++j;
    }
    printf("lines len: %d, input len: %d\n", i, j);

    return i; 
}
