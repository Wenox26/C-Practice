//IF ELSE 
#include <stdio.h>
#include <stdbool.h>

int main(){

    //IF-ELSE STATEMENTS
    //statements that can be used in decision making that involves parameters and logical &&(and), logical ||(or)

    //Logical &&, ||- compares and contrasts/ analyzes two or more statements to be executed

    //Logical &&(and)----------------------------------------------------------------------------
    //both statements must be true in order to execute the code
    //Ex.
    //Nag gamint kog "<stdbool.h>" na library para pag declare sa boolean
    
    //Output: TRUE
    // bool a = true;
    // bool b = true;

    // if ( a && b ){
    //     printf("True");
    // }

    //Output: FALSE
    // bool a = true;
    // bool b = false;

    // if ( a && b ){
    //     printf("True");
    // }
    // else{
    //     printf("False");
    // }


    //Logical ||(or)-----------------------------------------------------------------------------
    //either one true statement(vice-versa) can execute the code 
    //Ex.
    
    // bool a = true;
    // bool b = false;

    // if ( a || b ){
    //     printf("True");
    // }


    //APPLICATION OF && and ||
    //ZODIAC SIGN IDENTIFIER

    // int bday, bmonth;

    // //Input
    // printf("Enter birth month: ");
    // scanf("%d", &bmonth);

    // printf("Enter birth day: ");
    // scanf("%d", &bday);

    // //Decision
    // if ((bmonth == 1 && bday >= 20) || (bmonth == 2 && bday <= 18))
    // {
    //     printf("Your zodiac sign is Aquarius");
    // }
    // else if ((bmonth == 2 && bday >= 19) || (bmonth == 3 && bday <= 20))
    // {
    //     printf("Your zodiac sign is Pisces");
    // }
    // else if ((bmonth == 3 && bday >= 21) || (bmonth == 4   && bday <= 19))
    // {
    //     printf("Your zodiac sign is Aries");
    // }
    // else if ((bmonth == 4 && bday >= 20) || (bmonth == 5 && bday <= 20))
    // {
    //     printf("Your zodiac sign is Taurus");
    // }
    // else if ((bmonth == 5 && bday >= 21) || (bmonth == 6 && bday <= 20))
    // {
    //     printf("Your zodiac sign is Gemini");
    // }
    // else if ((bmonth == 6 && bday >= 21) || (bmonth == 7 && bday <= 22))
    // {
    //     printf("Your zodiac sign is Cancer");
    // }
    // else if ((bmonth == 7 && bday >= 23) || (bmonth == 8 && bday <= 22))
    // {
    //     printf("Your zodiac sign is Leo");
    // }
    // else if ((bmonth == 8 && bday >= 23) || (bmonth == 9 && bday <= 22))
    // {
    //     printf("Your zodiac sign is Virgo");
    // }
    // else if ((bmonth == 9 && bday >= 23) || (bmonth == 10 && bday <= 21))
    // {
    //     printf("Your zodiac sign is Libra");
    // }
    // else if ((bmonth == 10 && bday >= 23) || (bmonth == 11 && bday <= 21))
    // {
    //     printf("Your zodiac sign is Scorpio");
    // }
    // else if ((bmonth == 11 && bday >= 22) || (bmonth == 12 && bday <= 21))
    // {
    //     printf("Your zodiac sign is Sagittarius");
    // }
    // else if ((bmonth == 12 && bday >= 22) || (bmonth == 1 && bday <= 19))
    // {
    //     printf("Your zodiac sign is Capricorn");
    // }
    // else
    // {
    //     printf("Invalid date input. Please enter a valid day and month");
    // }



    //POSITIVE/NEGATIVE, ODD/EVEN---------------------------------------------------------------
    // int num;

    // //Input
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // //Decision + or -
    // if (num < 0)
    // {
    //     printf("The number is negative\n");
    // }
    // else if(num > 0)
    // {
    //     printf("The number is positive\n");
    // }
    // else 
    // {
    //     printf("The number is 0\n");
    // }

    // //odd or even
    // if (num %2 == 0)
    // {
    //     printf("The number is even");
    // }
    // else
    // {
    //     printf("The number is odd");
    // }

    
    




    return 0;
}