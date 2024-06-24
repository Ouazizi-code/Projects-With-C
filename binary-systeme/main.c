#include <stdio.h>



// lets inicialize the programe
void init_state(){
    puts("===== convert to binary system ===== \n");
    puts("Please chose a type ");
    puts("   1- only numbers");
    puts("   2- only characters");
    puts("   3- both");
}


// let take   the choise from the user 

int  choise(){
    int type;
    printf("Enter a number: ");
    scanf("%d",&type);
    //getchar();
    return type;

}

// let chec the choise and print it 
int print_choise(){
    int type = choise(type);
    if( type != 1  && type != 2 && type != 3  ){
        printf("please enter a number betwen 1 and 3\n");
    }else{
        printf("your choise is :%d\n",type);
    }
}

// lets take the input from user 

int takeInput(){
    int number;
    int binary[1000]; // array to stor binary digits
    int i = 0;
    printf("Enter the number you wants to converts : " );
    scanf("%d",&number);

    while(number > 0){
        binary[i] = number % 2; // store reminder as a binary digits
        number = number /2 ; // update the number by deviding it by 2 
        i++;
    }
    printf("the number in binary is :");
    // print binary array in reverse mode
    for(int j = i -1; j >= 0; j--){
        printf("%d",binary[j]);
    }
    printf("\n");

}







int main(){
    
    // lets print the initiale state
    init_state();
    
    // let print the choise
    print_choise();

    // lets take the input from user  and convert it 
    takeInput();

    // convert into binary 

    
}