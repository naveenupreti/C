#include<stdio.h>
void inputArray(int[],int);
void printArray(int[],int);
void squareArray(int[],int);
void main(void)
{
    int a[10]={10,20,30,40,50};
    int i,size,n;
    printf("\nsizeof(a[0])=%d",sizeof(a[0]));
    printf("\nsizeof(a)=%d",sizeof(a));
    size=sizeof(a)/sizeof(a[0]);
    printf("\narray size=%d",size);
    printf("\nBase address through &a[0]=%u",&a[0]);
    printf("\nBase address through Name of array=%u",a);
    //printf("\na++=%d",a++);
	/*Base address is Constant. Can't be modified. So,lvalue error. */
    printArray(a,size);
    printf("\nHow many elements do you want to enter:");
    scanf("%d",&n);
    inputArray(a,n);
    printArray(a,n);//print only n elements
    squareArray(a,n);
    printArray(a,size);//print the whole array
}
void inputArray(int a[],int arraySize)
{
    int i;
    printf("\nEnter elements:");
    for(i=0;i<arraySize;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void printArray(int a[],int arraySize)
{
    int i;
    printf("\nArray contains:");
    for(i=0;i<arraySize;i++)
    {
        printf("\na[%d]=%d and its address=%u",i,a[i],&a[i]);
    }
}
void squareArray(int a[],int arraySize)
{
    int i;
    printf("\nInside squareArray:");
    for(i=0;i<arraySize;i++)
       a[i]*=a[i];//square every element of array
}


/* Output

sizeof(a[0])=4
sizeof(a)=40
array size=10
Base address through &a[0]=2293472
Base address through Name of array=2293472
Array contains:
a[0]=10 and its address=2293472
a[1]=20 and its address=2293476
a[2]=30 and its address=2293480
a[3]=40 and its address=2293484
a[4]=50 and its address=2293488
a[5]=0 and its address=2293492
a[6]=0 and its address=2293496
a[7]=0 and its address=2293500
a[8]=0 and its address=2293504
a[9]=0 and its address=2293508
How many elements do you want to enter:3

Enter elements:
a[0]=7

a[1]=8

a[2]=9

Array contains:
a[0]=7 and its address=2293472
a[1]=8 and its address=2293476
a[2]=9 and its address=2293480
Inside squareArray:
Array contains:
a[0]=49 and its address=2293472
a[1]=64 and its address=2293476
a[2]=81 and its address=2293480
a[3]=40 and its address=2293484
a[4]=50 and its address=2293488
a[5]=0 and its address=2293492
a[6]=0 and its address=2293496
a[7]=0 and its address=2293500
a[8]=0 and its address=2293504
a[9]=0 and its address=2293508
Process returned 10 (0xA)   execution time : 6.553 s
Press any key to continue.
*/
