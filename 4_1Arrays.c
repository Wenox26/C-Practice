//ARRAYS

#include <stdio.h>

int main() {

    //DECLARED ARRAY/S-------------------------------------------------------------------------------------
    //Note: mag start sa 0 ang index representing the first value, if it's 1 then it respresents the 2nd value of the array
    //-----------0--1--2--3--4--...and so on (index values represented in each values/data)
    // int num[] = {1, 2, 3, 4, 5};

    // printf("%d", num[0]);


    //USER DEFINED ARRAYS---------------------------------------------------------------------------------
    //Note: if i-print ang multiple values, you must use for-loop para mag loop then ma read ang tagsa2 na values
    //square brackets to limit the input values(ex. "5")
    
    int num [5];//5 values ang limit nga ma store(Note: lahi ang pag set ug limit sa values sa pag-indexing sa array)

    //For-loop for storing the values
    printf("Enter numbers[use space to separate values]: ");
    for(int i = 0; i<6; i++){
        scanf("%d", &num[i]);
    }

    //Try input 1 2 3 4 5 
    printf("\n\nNumber 1: %d", num[0]);//output: 1
    printf("\nNumber 2: %d", num[1]);//output: 2
    printf("\nNumber 3: %d", num[2]);//output: 3
    printf("\nNumber 4: %d", num[3]);//output: 4
    printf("\nNumber 5: %d", num[4]);//output: 5
    
    //[TEST]: 0 ang output because walay ika 6 nga number, the "int num= 5(gi declare sa babaw)" indicates how many values are stored
    //again, lahi ang pag set sa limit sa data(ex. "int num [5]") | kesa | pag-index sa data(ex. "printf("\nNumber 6: %d", num[5])")
    printf("\nNumber 6: %d", num[5]);//output: 0


    //Char/Character Arrays----------------------------------------------------
    // char letters[]={'a','b','c','d'};
    

    // for (int i =0;i<4;i++){
    //     printf("%c\n", letters[i]);   
    // }

    return 0;
}