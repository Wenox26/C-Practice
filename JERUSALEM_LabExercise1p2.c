//ZODIAC SIGN IDENTIFIER
#include <stdio.h>

//ZODIAC FUNCTIONS
//I 
const char* zodiacSigns(int day, int month){
    
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)){//
        return "Aquarius";
    }
    else if((month == 2 && day >= 19) || (month == 3 && day <= 20)){//
        return "Pisces";
    }
    else if((month == 3 && day >= 21) || (month == 4 && day <= 19)){//
        return "Aries";
    }
    else if((month == 4 && day >= 20) || (month == 5 && day <= 20)){//
        return "Taurus";
    }
    else if((month == 5 && day >= 21) || (month == 6 && day <= 20)){//
        return "Gemini";
    }
    else if((month == 6 && day >= 21) || (month == 7 && day <= 22)){//
        return "Cancer";
    }
    else if((month == 7 && day >= 23) || (month == 8 && day <= 22)){//
        return "Leo";
    }
    else if((month == 8 && day >= 23) || (month == 9 && day <= 22)){//
        return "Virgo";
    }
    else if((month == 9 && day >= 23) || (month == 10 && day <= 22)){//
        return "Libra";
    }
    else if((month == 10 && day >= 23) || (month == 11 && day <= 21)){//
        return "Scorpio";
    }
    else if((month == 11 && day >= 22) || (month == 12 && day <= 21)){//
        return "Sagittarius";
    }
    else if((month == 12 && day >= 22) || (month == 1 && day <= 19)){//
        return "Capricorn";
    }
    else{
        return "not in the options[INVALID INPUT], please try again";
    }
}

int main() {
    int month, day;
    char choice;

    printf("\n\nWELCOME TO ZODIAC SIGN IDENTIFIER");

    do {
        // MONTH AND DAY USER INPUT
        printf("\nEnter month: ");
        scanf("%d", &month);

        printf("Enter day: ");
        scanf("%d", &day);

        // FUNCTION CALL
        const char* zodiac = zodiacSigns(day, month);

        printf("Your Zodiac Sign is %s.\n", zodiac);

        // ASK USER IF THEY WANT TO CONTINUE
        printf("\n[Do you want to continue? (y/n)]: ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nTHANK YOU FOR USING ZODIAC SIGN IDENTIFIER");
    printf("\nPROGRAMMED BY: Owen M. Jerusalem BSIT-1D");

    return 0;
}