#include <stdio.h>

void input(int a[100][100], int b[100][100], int r1, int c1, int r2, int c2);
void multiply(int a[100][100], int b[100][100], int c[100][100], int r1, int c1, int r2, int c2);
void display(int c[100][100], int r1, int c1);

int main()
{
	int a[100][100], b[100][100], c[100][100], r1, c1, r2, c2, i, j, k;
	printf("Enter rows and column for first matrix: ");
	scanf("%d %d", &r1, &c1);
	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &r2, &c2);
    input(a, b, r1, c1, r2, c2);
    multiply(a, b, c, r1, c1, r2, c2);
    display(c, r1, c2);
	return 0;
}

void input(int a[100][100], int b[100][100], int r1, int c1, int r2, int c2)
{
	int i, j;
	printf("\nEnter elements of matrix 1:\n");
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c1; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter elements of matrix 2:\n");
	for(i = 0; i < r2; i++)
	{
		for(j = 0; j < c2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
}
void multiply(int a[100][100], int b[100][100], int c[100][100], int r1, int c1, int r2, int c2)
{
	int i, j, k;
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			c[i][j] = 0;
		}
	}
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			for(k=0; k<r2; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
void display(int c[100][100], int r1 ,int c2)
{
	int i, j;
	printf("\nOutput Matrix:\n");
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("%d\t", c[i][j]);
		}
        printf("\n");
	}
}