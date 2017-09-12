#include <stdio.h>

#define MAXLINE 1000
int removetrailblanks(char store[], char input[], int input_len);
int main(){
    char lines[MAXLINE];
    char temp_line[MAXLINE];
    int line_len = 0;
    int i = 0;
    int c;

    while ((c = getchar()) != EOF && i < (MAXLINE - 1)){
        if (c == '\n' && i >= 80){
            temp_line[i] = '\0';
            lines_len = append(lines, temp_line, lines_len, i);
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

    return 0;
}
/* remove trail blanks and tabs of the input string and append it to store[]
 * if it is a blank line, append nothing
 * return the length of the store[]
 */
int removetrailblanks(char store[], char input[], int input_len){

}
