//ZODIAC SIGN IDENTIFIER
#include <stdio.h>

//ZODIAC FUNCTIONS
//I 
const char* zodiacSigns(int day, int month){
    
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)){
        return "Aquarius";
    }
    else if((month == 2 && day >= 18) || (month == 3 && day <= 20)){
        return "Pisces";
    }
    else if((month == 3 && day >= 20) || (month == 4 && day <= 19)){
        return "Aries";
    }
    else if((month == 4 && day >= 19) || (month == 5 && day <= 20)){
        return "Taurus";
    }
    else if((month == 5 && day >= 18) || (month == 6 && day <= 20)){
        return "Gemini";
    }
    else if((month == 6 && day >= 18) || (month == 7 && day <= 20)){
        return "Cancer";
    }
    else if((month == 7 && day >= 18) || (month == 8 && day <= 20)){
        return "Leo";
    }
    else if((month == 8 && day >= 18) || (month == 9 && day <= 20)){
        return "Virgo";
    }
    else if((month == 9 && day >= 18) || (month == 10 && day <= 20)){
        return "Libra";
    }
    else if((month == 10 && day >= 18) || (month == 11 && day <= 20)){
        return "Scorpio";
    }
    else if((month == 11 && day >= 18) || (month == 12 && day <= 20)){
        return "Sagittarius";
    }
    else if((month == 12 && day >= 18) || (month == 1 && day <= 20)){
        return "Capricorn";
    }
    else{
        return "Invalid Input. Please try again.";
    }
}

int main(){

    int month, day;

    printf("\n\nWELCOME TO ZODIAC IDENTIFIER");

    //MONTH AND DAY USER INPUT
    printf("\nEnter month: ");
    scanf("%d",&month);

    printf("Enter day: ");
    scanf("%d", &day);

    //FUNCTION CALL
    const char* zodiac = zodiacSigns(day, month);

    printf("\nYour Zodiac Sign is %s", zodiac);

    return 0;
}