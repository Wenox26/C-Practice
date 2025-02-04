//ARRAY EXERCISE
#include <stdio.h>

int main(){
    
    //Getting sum of int using array
    int n[5], i, sum = 0;

    printf("Enter numbers: ");
    
    for (i = 0; i < 5; i++){
        scanf("%d", &n[i]);
        sum += n[i]; //Sums the array elements
    }

    printf("The sum is: %d", sum);
    
    
    
    return 0;
    
}