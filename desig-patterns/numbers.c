#include<stdio.h>


int main(){
    printf("=== this is pattern numbers ===\n\n");
    for(int i =0; i< (5 * 2) -1 ; i++){
        for(int j =0; j< 5*2 -1; j++){

            int min = i < j ? i : j ;
            min = min < 5*2-2 -i ? min : 5*2-2-i;
            min = min < 5*2-2 -j ? min : 5*2-2-j;

            printf("%d ", 5- min);
        }
        printf("\n");
    }

}