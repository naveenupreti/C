#include<stdio.h>

#include<string.h>
int stringlength(char[]);
int stringlength(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return(i);
}
void main()
{
    int i=0;
    char str[20],target[30];
    printf("\nEnter a string:");
    //scanf("%s",str);// scanf accepts only non-space strings
    gets(str);//gets accepts multi-space strings
    printf("\nstr=%s",str);
    i=strlen(str);
    printf("\nLength of %s=%d",str,i);

    i=stringlength(str);
    printf("\nLength of %s=%d",str,i);

    printf("\ntarget before strcpy=%s",target);
    strcpy(target,"BCA");
    printf("\ntarget after strcpy=%s",target);

    printf("\ntarget before strcat=%s",target);
    strcat(target,"MCA");
    printf("\ntarget after strcat=%s",target);

    printf("\ntarget before strrev=%s",target);
    strrev(target);
    printf("\ntarget after strrev=%s",target);

    i=strcmp("BCA","BCA");
    printf("\nResult of strcmp(\"BCA\",\"BCA\")= %d",i);

    i=strcmp("BCA","bca");
    printf("\nResult of strcmp(\"BCA\",\"bca\")= %d",i);

    i=strcmp("bca","BCA");
    printf("\nResult of strcmp(\"bca\",\"BCA\")= %d",i);
}
/*
Output

Enter a string:naveen

str=naveen
Length of naveen=6
Length of naveen=6
target before strcpy=@
target after strcpy=BCA
target before strcat=BCA
target after strcat=BCAMCA
target before strrev=BCAMCA
target after strrev=ACMACB
Result of strcmp("BCA","BCA")= 0
Result of strcmp("BCA","bca")= -1
Result of strcmp("bca","BCA")= 1
Press any key to continue.
*/
