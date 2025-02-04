//ARRAY EXERCISE
#include <stdio.h>

int main(){
    
    //Getting sum of int using array------
    // int n[5], i, sum = 0;

    // printf("Enter numbers: ");
    
    // for (i = 0; i < 5; i++){
    //     scanf("%d", &n[i]);
    //     sum += n[i]; //Sums the array elements
    // }
    // printf("The sum is: %d", sum);
    
    //Size of------
    int n[]= {1,2,3,4,5,};//Each element contains 4 bytes so 4x[5](number of elements inside the array)= 20

    printf("Size of: %lu", sizeof(n));

    
    
    return 0;
    
}