#include<stdio.h>
void main()
{
    char choice;
    char name[100];
    while(1)
    //for(;;)
    {
       printf("\nEnter any string:");
       gets(name);
       printf("\nYou entered: %s",name);
       printf("\nPress y or Y to continue:");
       scanf("%c",&choice);
       fflush(stdin);
       if(choice=='y' || choice=='Y')
        continue;
       else
         break;
    }
}
