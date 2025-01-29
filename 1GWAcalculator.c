//GWA CALCULATOR

#include <stdio.h>

int main(){

    float IT111, IT112, IT113, avg;


    printf("GWA CALCULATOR");

    //INPUT------------------------------------
    printf("\n\nEnter graden in IT111: ");
    scanf("%f", &IT111);

    printf("Enter graden in IT112: ");
    scanf("%f", &IT112);

    printf("Enter graden in IT113: ");
    scanf("%f", &IT113);

    //PROCESS----------------------------------
    avg = (IT111+IT112+IT113)/3;

    
    if (avg <= 2.25){
        printf("\n\nYou passed with a GWA of: %.2f", avg);
    }

    else{
        printf("\n\nYou failed with a GWA of: %.2f", avg);
    }



    return 0;
}