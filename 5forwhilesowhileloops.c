// //For, while, do loops

#include <stdio.h>
#include <string.h>

int main() {

    //WHILE LOOPS:---------------------------------------------------
    //Murag for-loop pero daghan ug line, tagsa-tagsaon ang declaration, condition, iteration

    // int i = 3;

    // while(i > 0){
    //     printf("%d", i);
    //     i--;
    // }

    //FOR LOOP--------------------------------------------------------
    //efficient way for looping/ alternative sa while-loop

    // for(int i = 3; i > 0; i--){
    //     printf("%d", i);
    // }

    //For loop with arrays
    // char names[][10] = {"Alice", "Bob", "Charlie"};
    // char username[20];

    // printf("Enter username: ");
    // scanf("%s", &username);

    // int user_not_found = 0; // 0 means not found, 1 means found

    // for (int i = 0; i < 3; i++) {
    //     if (strcmp(names[i], username) == 0) {
    //         printf("%s\n", &names[i]);
    //         user_not_found = 1;
    //         break;
    //     }
    // }

    // if (!user_not_found) {
    //     printf("User not found\n");
    // }

    //NESTEDFORLOOPS
    //For loop nga naay for loop sa sulod, nice ni if daghan kag i-loop sa isa ka loop oer daghan kag himoon sa isa ka loop nga involve ug looping

    // for(int i = 0; i < 11; i++){
    //     // printf("%d\n", i);
    //     for(int j = i; j >= 0; j--){
    //         printf("%d ", j);
    //     }
    // printf("\n");
    // }

    //DoWhile Loop:--------------------------------------------------------
    //EXECUTES THE CODE FIRST BEFORE CHECKING THE CONDITION

    int i = 5;

    do{
        printf("%d",i);
        i--;
    }
    while(i > 0);

    int i;
    
    do{
        printf("Enter a number[input 0 to stop]: ");
        scanf("%d", &i);
    }
    while(i != 0);
    
    printf("Thank you for inputing numbers!");


    return 0;
}