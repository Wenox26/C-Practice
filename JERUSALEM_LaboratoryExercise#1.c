#include <stdio.h>

//FUNCTION DECLARATION=============
int askGender();
int askAge();
float pension (int gender, int age);


//MAIN FUNCTION====================
int main(){

    int gender, age;

    //DISPLAY MENU
    printf("Pension Calculator");
    printf("\n[1. Male], [2. Female]");

    gender = askGender();
    age = askAge();

    //OUTPUT
    printf("\nYour total pension is: %.2f", pension(gender, age));


    return 0;
}

//FUNCTION========================

//Asks the Gender 
int askGender(){
    int fgender;

    //User Input
    printf("\n\nEnter Gender: ");
    scanf("%d", &fgender);

    return fgender;
}

//Asks the Age
int askAge(){
    int fage;

    //User Input
    printf("Enter Age: ");
    scanf("%d", &fage);

    return fage;
}

//Calculating the pension
float pension(int gender, int age){
    
    float deduction, totalpen;

    //MALE
    if (gender == 1){
        
        if(age >= 65){
            
            deduction = 5500 * 0.05;
            totalpen = 5500 - deduction;

            return totalpen;
        }
        
        else if(age > 50 && age < 65){
            
            deduction = 4500 * 0.05;
            totalpen = 4500 - deduction;

            return totalpen;
        }
        
        else if(age < 50){
            
            totalpen = 0;

            return totalpen;
        }
    }

    //FEMALE
    if (gender == 2){
        
        if(age >= 65){
            
            deduction = 6500 * 0.02;
            totalpen = 6500 - deduction;

            return totalpen;
        }
        
        else if(age > 50 && age < 65){
            
            deduction = 5500 * 0.02;
            totalpen = 5500 - deduction;

            return totalpen;
        }
        
        else if(age < 50){
            
            totalpen = 0;

            return totalpen;
        }
    }


}

