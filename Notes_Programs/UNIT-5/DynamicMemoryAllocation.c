#include <stdio.h>
#include <malloc.h>
#include <string.h>
void main()
{
   char *str;
   /* allocate memory for string */
   str = (char *)malloc(10*sizeof(char));
   //str = (char *)calloc(10,sizeof(char));
   if(str==NULL)
   {
       printf("\n Can not allocate memory");
       exit(0);
   }
   /* copy "MCA" into string */
   strcpy(str, "MCA");

   printf("\nString is: %s and  Address is: %u\n", str, str);
   str = (char *) realloc(str, 25);
   printf("\nAfter realloc, String is: %s and New address is %u\n", str, str);
   /* free memory */
   free(str);
}
