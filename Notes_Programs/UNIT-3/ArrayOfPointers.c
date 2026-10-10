// C Program to print Array of Pointers
#include <stdio.h>

int main()
{
  int i;
  char *arr[] = {"Naveen", "Chandra", "Upreti"};
  printf("sizeof(arr)=%d\n",sizeof(arr));
  printf("String array Elements are:\n");

  for (i = 0; i < 3; i++)
  {
    printf("arr[%d]=%s, sizeof(arr[%d])=%d\n", i,arr[i],i,sizeof(arr[i]));
  }
  return 0;
}

/*
Output:

sizeof(arr)=24
String array Elements are:
arr[0]=Naveen, sizeof(arr[0])=8
arr[1]=Chandra, sizeof(arr[1])=8
arr[2]=Upreti, sizeof(arr[2])=8

*/
