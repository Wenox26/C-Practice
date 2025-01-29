//FUNCTIONS
#include <stdio.h>


//Functions: 
//Is a block or set of code that has specific nga trabaho and later be called to be executed

//Either mag function declaration ka if naas ibabaw ang imong main function or parehas sa example below nga naas pinakaubos ang main function para dili na mag function declare

//EX. Function declaration(refering to the code below): [void displayMenu();]
//EX. Function calling(must be inside the main):        [ printf("The sum of %.2f and %.2f is: %.2f", num1, num2, add(num1,num2));]


//4 TYPES OF FUNCTIONS
//1 void, no return value
//2 void, return value
//3 has parameter, no return value
//4 has parameter, return value


//FUNCTION FOR DISPLAY MENU/CHOICES
void displayMenu(){
    printf("\n\nCALCULATOR [FUNCTIONS]");
    printf("\nChoose an operator");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    
}

//FUNCTIONS FOR CALCULATION/PROCESS
float add(float x,float y){
    float sum = x + y;
    return sum;
}

float sub(float x,float y){
    float diff = x - y;
    return diff;
}

float mult(float x,float y){
    float prod = x *y;
    return prod;
}

float div(float x,float y){
    if(y == 0){
        printf("Cannot be divided by zero[0].");
        return 1;
    }
    
    float sum = x / y;
    return sum;
}



int main(){
    int choice;
    float num1, num2;

    while (1)//Loops the program[CAN ALSO USE Do-While to loop]
    {
        displayMenu();

        
        printf("\nSelect an operator: ");
        scanf("%d", &choice);
    
        //[CAN ALSO USE SWITCH-CASE]
        if(choice == 1){
            printf("\nEnter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            printf("The sum of %.2f and %.2f is: %.2f", num1, num2, add(num1,num2));
        }

        else if(choice == 2){
            printf("\nEnter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            printf("The difference of %.2f and %.2f is: %.2f", num1, num2, sub(num1,num2));
        }

        else if(choice == 3){
            printf("\nEnter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            printf("The product of %.2f and %.2f is: %.2f", num1, num2, mult(num1,num2));
        }
        
        else if(choice == 4){
            printf("\nEnter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            printf("The quotient of %.2f and %.2f is: %.2f", num1, num2, div(num1,num2));
        }

        else if(choice == 5){
            printf("\nThank you for using C Calculator[Functions]!");
            break;
        }

        else{
            printf("Invalid input. Please only choose from the options provided.");
        }
    }
    

    return 0;
}