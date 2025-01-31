//SWITCH CASE PRACTICE
#include <stdio.h>

int main(){
    //SWITCH-CASE:
    //an alternative of if-else in decision making. Mas efficient gamiton ang switch case if only CASE-SCENARIO situations
    //unlike sa if-else, dili makabutang ug parameter ang switch-case ex. (if(5>3)...) makabutang lang ug parameter but naa na sulod sa case/s.

    //SWITCH CASE CALCULATOR------------------------------------------------------
    float num1, num2, result;
    int op;

    printf("C CALCULATOR");

    //SELECTING OPERATOR
    printf("\n\n1.ADD, 2.SUBTRACT, 3. MULT, 4. DIVIDE");
    printf("\n\nEnter operator: ");
    scanf("%d", &op);

    //INPUT
    printf("\nEnter first number: ");
    scanf("%f", &num1);

    printf("Enter second numeber: ");
    scanf("%f", &num2);



    //OPERATOR CHOICES
    switch (op)
    {
    case 1://Addition
        result = num1 + num2;
        break;
    
    case 2://Subtraction
        result = num1 - num2;
        break;

    case 3://Multiplication
        result = num1 * num2;
        break;

    case 4://Division
            if (num2 == 0) {
                printf("Error: Cannot be divided by zero.\n");
                return 1;
            }
            result = num1 / num2;
            break;    
 
    default:
        printf("Error: Invalid operator.\n");
        return 1;
    }

    //RESULT
    printf("\nAnswer is: %f", result);

    return 0;
}