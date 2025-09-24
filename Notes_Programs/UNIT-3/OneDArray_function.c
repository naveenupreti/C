/* Passing One-Dimensional Array to a function */
#include<stdio.h>
#define MAX 20

void print(int [], int);
void square(int [], int);

void main()
{
	int n,i;
	int a[MAX];
	printf("\nHow many numbers do you want to enter:");
	scanf("%d",&n);
	printf("\nEnter the numbers");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

    print(a,n);
	square(a,n);
	print(a,n);

} //end of main
void print(int a[],int n)
{
	int i;
	printf("\nPrinting through print() function:\n");
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
void square(int a[], int n)
{
	int i;
	printf("\nIn function square():\n");
	for(i=0;i<n;i++)
	{
		a[i]*=a[i];
	}
}
