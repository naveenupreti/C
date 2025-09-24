// C Program to print Array
// of Pointers
#include <stdio.h>

// Driver code
int main()
{
  int i;
  char *arr[] = {"Geek", "Geeks", "Geekfor"};
  printf("String array Elements are:\n");
  printf("sizeof(arr)=%d\n",sizeof(arr));

  for (i = 0; i < 3; i++)
  {
    printf("arr[%d]=%s, sizeof(arr[%d])=%d\n", i,arr[i],i,sizeof(arr[i]]));
  }
  return 0;
}
