#include <stdio.h>






// ask user for length oh numbers and store them into array
int average(void){

    int length;
    printf("how many numbers ? :");
    scanf("%i",&length);
    int numbers[length];

    // use for loop to store the numbers in arr
    for(int i = 0; i < length; i++){
        printf("enter the %i number :",i);
        scanf("%i",&numbers[i]);
        
    }
    
    // print the array 
    printf("the numbers are :");
     for(int i=0; i< length; i++){
        printf("%d,",numbers[i]);
    }
    puts("");

    // calculate the average
    int result =0;
    for(int i = 0; i <length; i++){
        result += numbers[i] ;
    }
    printf("the average is :%.2f\n",result/(float)length);

}





int main(){

    puts("#===Hello average===#");
    average();
    puts("thanks ~~~..~~~");
}