/*
Command line arguments:
 The arguments which we pass to the main function through
 command prompt are called command line arguments.
 argc- argument counter(Total number of command line arguments)
 argv[]- array of string pointers

C:\Documents and Settings\admin\Desktop\c>cla bca bba mca

argv[0]=cla
argv[1]=bca
argv[2]=bba
argv[3]=mca
C:\Documents and Settings\admin\Desktop\c>


*/
#include<stdio.h>
void main(int argc, char *argv[])
{
    int i;
    for(i=0;i<argc;i++)
    {
        printf("\nargv[%d]=%s",i, argv[i]);
    }
}
/*
directory means folder
md- make directory
cd - change directory
cls - clear screen
cd . - current directory
cd .. - parent directory
cd \ - root directory
dir - list directory
*/
