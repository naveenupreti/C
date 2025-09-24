/*
The arguments which we pass to the main function through
 command promt are called command line arguments.

argc: argumnet counter
argv[]: argument vector
the array of string pointers argv[] will store the
addresses of the strings passed to the main function
as command line arguments.
the number of addresses will be equal to the value of argc.
*/
#include<stdio.h>
void main(int argc, char *argv[])
{
    int i;
    printf("\nargc=%d",argc);
    for(i=0;i<argc;i++)
    {
        //printf("\nargc===%d",argc);
        printf("\nargv[%d]=%s",i, argv[i]);
    }
}
/*
OUTPUT
C:\Documents and Settings\admin\Desktop\c>CommandLineArguments mca iise
argc=3
argv[0]=CommandLineArguments
argv[1]=mca
argv[2]=iise
*/
