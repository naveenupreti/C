#include<stdio.h>
void main()
{

    int i;
    char str[20],source[20],target[20];
    char *ptr;
    printf("\nEnter any string:");
    gets(str);
    i=strlen(str);
    printf("\nLength of %s=%d",str,i);
    ptr=strcpy(source, str);
    printf("\nsource=%s,ptr=%s",source,ptr);
    ptr=strcat(source,str);
    printf("\nsource after strcat=%s,ptr=%s",source,ptr);

    printf("\nOriginal str=%s",str);
    ptr=strrev(str);
    printf("\nReverse str=%s,ptr=%s",str,ptr);

   /*
   printf("\nsizeof(3.5f)=%u",sizeof(3.5f));
   default data type of a floting point number is double(8 bytes)
   default data type of a integer number is int(2/4 bytes)
   */

}
