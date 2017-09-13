#include <stdio.h>

#define MAXLINE 1000
int append(char to[], char from[], int to_len, int from_len);
int removetrailblanks(char store[], char input[], int store_len, int input_len);
int main(){
    char lines[MAXLINE];
    char temp_line[MAXLINE];
    int lines_len = 0;
    int i = 0;
    int c;
/*
    while ((c = getchar()) != EOF && i < (MAXLINE - 1)){
        if (c == '\n' && i >= 80){
            temp_line[i] = '\0';
            lines_len = removetrailblanks(lines, temp_line, lines_len, i);
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
    */
    char a[6] = {'a', 'a', 'a', 'a', '\n', '\0'};
    char b[8] = {'b', 'b', 'b', 'b', 'b', 'b','\n', '\0'};
    removetrailblanks(lines, a, 0, 6);
    printf("%s", lines);
    removetrailblanks(lines, b, 6, 8);
    printf("%s", lines);
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
    //append the string to store[]
    return append(store, input, store_len, j);
}
/* append an input string to the output string and return the length of the output */
int append(char to[], char from[], int to_len, int from_len){
    int i = to_len;
    int j = 0;
    to[i] = '\n';
    ++i;
    while((to[i] = from[j]) != '\0'){
        ++i;
        ++j;
    }
    return i; 
}
