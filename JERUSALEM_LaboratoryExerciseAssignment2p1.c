//MULTI-DIMENSIONAL ARRAYS
#include <stdio.h>

int main() {
    int size, i, j;
    
    printf("SUM OF ROWS AND COLUMNS");

    // Input the size of the square matrix
    printf("\nInput the size of the square matrix: ");
    scanf("%d", &size);
    
    //Variables to store the values inputed by the user
    int matrix[size][size];
    int rowSum[size], colSum[size];
    
    // Initialize rowSum and colSum to 0
    //[using for loop to easily store multiple values]
    for (i = 0; i < size; i++) {
        rowSum[i] = 0;
        colSum[i] = 0;
    }
    
    // Input elements in the matrix
    //[using for loop to easily store multiple values]
    printf("Input elements in the first matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    
    // Display the sum of rows
    //[using for loop to easily print multiple values]
    printf("\nSum of each row:\n");
    for (i = 0; i < size; i++) {
        printf("Row %d: %d\n", i, rowSum[i]);
    }
    
    // Display the sum of columns
    //[using for loop to easily print multiple values]
    printf("\nSum of each column:\n");
    for (j = 0; j < size; j++) {
        printf("Column %d: %d\n", j, colSum[j]);
    }
    
    printf("\nPROGRAMMED BY: OWEN M. JERUSALEM BSIT-1D");
    return 0;
}
