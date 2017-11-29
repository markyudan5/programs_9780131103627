/*
 * A program entab that replaces strings of blanks by the minimum numbers of tabs and blanks to achieve the same spacing. 
 * Use the same tab stops as for detab.
 */
#include <stdio.h>
#include <math.h>

#define SPACES 4
#define MAXLINE 1000
void entab();
int calc_max_tabs(int space_numbers);
int main(){
    entab();
    return 1;
}
void entab(){
    char new[MAXLINE];
    int c;
    int index = 0;

    while ((c = getchar()) != EOF){
       // printf("index:%d\n", index);
        if (c == ' '){
			int len = 1;
			while((c = getchar()) == ' '){
				++len;
			}
			int tab_num = calc_max_tabs(len);
		//	printf("number of spaces:%d, number of tabs: %d\n", len, tab_num);
			for(int i = 0; i < tab_num; i++){
				new[index] = '\t';
				++index;
			}
			for(int i = 0; i < len - tab_num * SPACES; i++){
				new[index] = ' ';
				++index;
			}
			new[index] = c; // add the first non space char
			++index;
        }
        else{
			new[index] = c;
			++index;
        }
    } 
    new[index] = '\0';
   // printf("final index:%d\n", index);
    printf("entabed:%s\n", new);
}
int calc_max_tabs(int space_numbers){
	return floor(space_numbers / SPACES);
}
