#include <stdio.h>

void sum_of_all_elements(int rows, int cols, int mat[rows][cols]) {
    int count=0;
    for(int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            count=count+mat[i][j];
        }
    }

    printf("Sum of all the elements you entered in the matrix is: %d\n", count);

}

void product_of_all_elements(int rows, int cols, int mat[rows][cols]) {
    long long count=1;
    for(int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            count=count*mat[i][j];
        }
    }

    printf("Product of all the elements you entered in the matrix is: %lld\n", count);

}

void replace_a_character(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the row of the element you want to replace.\n");
    int row;
    scanf("%d", &row);
    printf("Enter the column of the element you want to replace.\n");
    int col;
    scanf("%d", &col);

    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        printf("Error: Index (%d, %d) is out of bounds for a %d x %d matrix!\n", row, col, rows, cols);
        return; 
    }
    
    printf("Enter the new value for the element at position (%d, %d).\n", row, col);
    int new_value;
    scanf("%d", &new_value);
    matrix[row][col] = new_value;
    printf("Element at position (%d, %d) has been replaced with %d.\n", row, col, new_value);

    printf("Your updated matrix is:\n");
    for (int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", matrix[i][j]);
        }printf("\n");
    }printf("\n");

}

int main() {
    int rows, cols;

    printf("Enter the number of rows you want in the matrix.\n");
    scanf("%d", &rows);
    printf("Enter the number of columns you want in the matrix.\n");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix.\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Your matrix is:\n");
    for (int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", matrix[i][j]);
        }printf("\n");
    }printf("\n");

    sum_of_all_elements(rows, cols, matrix);
    product_of_all_elements(rows, cols, matrix);
    replace_a_character(rows, cols, matrix);
}