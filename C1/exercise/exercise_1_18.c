#include <stdio.h>

#define MAXLINE 1000
int removetrailblanks(char store[], char input[], int store_len, int input_len);
int main(){
    char lines[MAXLINE];
    char temp_line[MAXLINE];
    int line_len = 0;
    int i = 0;
    int c;

    while ((c = getchar()) != EOF && i < (MAXLINE - 1)){
        if (c == '\n' && i >= 80){
            temp_line[i] = '\0';
            lines_len = removetrailblanks(lines, temp_line, lines_len, );
            i = 0;
        }
        else if (c == '\n' && i < 80){
            i = 0;
        }
        else{
            temp_line[i] = c;
            ++i;
        }
    } 
    lines[++lines_len] = '\0';
    printf("%s\n", lines);
    return 0;
}
/* remove trail blanks and tabs of the input string and append it to store[]
 * if it is a blank line, append nothing
 * return the length of the store[]
 */
int removetrailblanks(char store[], char input[], int store_len, int input_len){
    int i = store_len;
    int j = input_len - 1;
    while (j > 0 && (input[j] == ' ' || input[j] == '\t')){
        if (input[j - 1] != ' ' && input[j - 1] != '\t'){
            input[j] = '\0';
            break;
        }
        else{
            --j;
        }
    }
}
