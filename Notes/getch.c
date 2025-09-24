#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    fflush(stdin);
    printf("\nEnter any character:");

    fflush(stdin);
    system("pause");
    ch=getch();
    printf("\nAfter getch,ch=%c",ch);

    fflush(stdin);

    printf("\nEnter any character:");
    ch=getche();
    printf("\nAfter getche,ch=%c",ch);

    fflush(stdin);

    printf("\nEnter any character:");
    ch=getchar();
    printf("\nAfter getchar,ch=%c",ch);

}
