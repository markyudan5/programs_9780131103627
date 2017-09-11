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
        if (c != '\n')
           temp_line[i] = c;
            ++i;
        if (c == '\n'){
            if (i > 5){
                temp_line[i] == '\n';
                lines_len = append(lines, temp_line, lines_len, i); 
                i = 0;
            }
            else{
                i = 0;
            }
        }

        printf("%s", lines);
    }
    return 0;
}
int append(char to[], char from[], int to_len, int from_len){
    int i = to_len;
    int j = 0;

    while((to[i] = from[j]) != '\0')
        ++i;
        ++j;

    return i; 
}
