/* Passing Two-Dimensional Array to a function */
#include <stdio.h>
#define MAX 10 
void print_matrix(int [][MAX],int,int);
void main(void)
{
   int i,j,rows,cols,p[MAX][MAX] ;
   printf("\nEnter the number of rows:");
   scanf("%d",&rows);
   printf("\nEnter the number of columns:");
   scanf("%d",&cols);
   printf("\nEnter the elements of the matrix:");
   for(i=0;i<rows;i++)
	   for(j=0;j<cols;j++)
		   scanf("%d",&p[i][j]);
   puts("The matrix entered is:");
   print_matrix(p,rows,cols); //calling function
} //end of main( )

void print_matrix(int a[][MAX], int rows, int cols)
{
   int i, j;
   for (i=0; i<rows; i++)
   {
	 for (j=0; j<cols; j++)
	 {
	    printf("%d\t", a[i][j]);
	 }
	 printf("\n");
   }
}
