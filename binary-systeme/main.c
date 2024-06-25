#include <stdio.h>

// lets inicialize the programe
void init_state()
{
    puts("===== convert to binary system ===== \n");
    puts("Please chose a type ");
    puts("   1- only numbers");
    puts("   2- only characters");
    puts("   3- both");
}

// let take   the choise from the user
int choise()
{
    int type;
    printf("Enter the number of your choise: ");
    scanf("%d", &type);

    // set the condition if the user enter an invalide choise
    while (type != 1 && type != 2 && type != 3)
    {
        puts("Warning!! please enter a valide number");
        printf("Enter the number of your choise: ");
        scanf("%d", &type);
    }
    printf("your choise is :%d\n", type);

    return type; // return this to use it in the main function in conditions statement
}

// lets take the input from user and convert it

int convertNum()
{
    int number;
    int binary[1000]; // array to stor binary digits
    int i = 0;
    printf("Enter the number you wants to converts : ");
    scanf("%d", &number);

    while (number > 0)
    {
        binary[i] = number % 2; // store reminder as a binary digits
        number = number / 2;    // update the number by deviding it by 2
        i++;
    }
    printf("the number in binary is :");
    // print binary array in reverse mode
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    puts("converted succecfully");
}

int main()
{

    // lets print the initiale state
    init_state();

    // lets take the input from user  and convert it
    // in first check the type of the input
    int type = choise();
    if (type == 1)
    {
        convertNum();
    }
    else if (type == 2)
    {
        /// code for characters
        puts("enter the characters:");
    }
    else
    {
        // c ode for the both
        puts("enter the mixt number:");
    }

    // convert into binary
    // good
}