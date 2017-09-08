#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORDS 50 /* max number of words */

/* print a histogram of the lengths of words in its input. */
main(){
    int c, state, word_count;
    state = OUT;
    int word_lengths[MAX_WORDS];
    word_count = 0; 
    
    for (int i = 0; i < MAX_WORDS; i++){
        word_lengths[i] = 0; 
    }

    while (word_count < MAX_WORDS && (c = getchar()) != EOF){
       if (state == IN){
           if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))){
               state = OUT;
           }
           else{
               word_lengths[word_count - 1]++;
           }
       }
       else if (state == OUT){
           if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
               state = IN;
               word_count++;
               word_lengths[word_count - 1]++;
           }
       }

    }
    printf("word length list:"); 
    for (int i = 0; i < word_count; i++){
        printf(" %d", word_lengths[i]); 
    }
    printf("\n");
    
    printf("histogram: \n"); 
    for (int i = 0; i < word_count; i++){
        for (int j = 0; j < word_lengths[i]; j++){
            printf("-");
        }
        printf("\n");
    }

}
