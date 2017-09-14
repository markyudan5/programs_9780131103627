#include <stdio.h>

#define MAXLINE 1000
void reverse(char s[]);
int my_getline(char s[], int lim);
int main(){
    char input[MAXLINE];
    while (my_getline(input, MAXLINE) >= 0){
        reverse(input);
    }

    /*
    char a[5] = {'a', 'b', 'c', 'd', '\0'};
    reverse(a);
    printf("%s\n", a);
    */
    return 0;
}
void reverse(char s[]){
    char temp[MAXLINE];
    int len = 0;
    int i = 0;
    while(s[len] != '\0'){
        ++len;
    }
    while(len >= 0){
       temp[i] = s[len - 1];
       ++i;
       --len;
    }
    temp[i + 1] = '\0';
    printf("%s\n", temp);
}
int my_getline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
    if (c == EOF)
        return -1;
	return i;
}
