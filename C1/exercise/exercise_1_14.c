#include <stdio.h>

#define CHAR_NUM 256

/* Print a histogram of the frequencies of different characters in its input. */
main(){
    int char_list[CHAR_NUM];
    int c;
    for (int i = 0; i < CHAR_NUM; i++){
        char_list[i] = 0;
    }

    while ((c = getchar()) != EOF){
        char_list[c]++;    
    }

    //print the histogram
    for (int i = 0; i < CHAR_NUM; i++){
        int count = char_list[i];
        if (count > 0){
            printf("letter:'%c', count:%d\n", i, count);
            for (int j = 0; j < count; j++){
                printf("#");
            }
            printf("\n");
        }
    }
}
/* note that a char is already a int */
