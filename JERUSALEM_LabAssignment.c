#include <stdio.h>

int main() {

    int size;

    //User Input Size
    printf("Enter size of the array: ");
    scanf("%d", &size);

    //Declaring the array after size input
    int arr[size][size];

    //User input
    printf("\nEnter %d values for a %dx%d matrix:\n", size * size, size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value;
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &value);
            arr[i][j] = value * 50; // Multiply by 50 before storing
        }
    }
    

    // Displaying elements diagonally
    printf("\nDiagonal elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    
    printf("\nPROGRAMMED BY: OWEN M. JERUSALEM BSIT 1-D");
    
    
    
    return 0;
}
