#include <stdio.h>
void input(int matrix[100][100], int row, int column);
void print(int matrix[100][100], int row, int column);
int main()
{
    int mat[100][100];
    int row,col;
    printf("Enter the order of the matrix:");
    printf("\nRows: ");
    scanf("%d", &row);
    printf("\nColumns: ");
    scanf("%d",&col);
    printf("\nEnter the elements:");
    input(mat, row, col);
    printf("Matrix:\n");
    print(mat, row, col);
    return 0;
}
void input(int matrix[100][100], int row, int column)
{
    int i,j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print (int matrix[100][100], int row, int column)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }
}