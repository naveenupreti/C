#include<stdio.h>

int strlength(char *);
int strcompare(char *,char *);
char *strreverse(char *);
char *strupper(char *);
char *strlower(char *);
char *strconcat(char *,char *);
char *strcopy(char *, char *);

int strlength(char *str)
{
    int length=0;
    char *p;p=str;
    while(*p!='\0')
    {
        length++;
        p++;
    }
    return(length);
}
char *strreverse(char *s)
{
    char *p,*q,temp;
    p=s;
    q=s+strlength(s)-1;
    while(p<=q)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;q--;
    }
    return(s);
}

char *strcopy(char *t, char *s)
{
    char *p=t;
    while(*t++=*s++);
    return(p);
}
int strcompare(char *s,char *t)
{
    int r;
    char *p,*q;
    p=s,q=t;
    while(*p!='\0' || *q!='\0')
    {
        /*
        if(*p<*q)
          //return(-1);
          return(*p-*q);
        else if(*p>*q)
          //return(1);
          return(*p-*q);
        else if(*p==*q)
        {
            p++;q++;
        }
        */
        if(*p==*q)
        {
            p++;q++;
        }
        else if(*p<*q || *p>*q)
        {
            return(*p-*q);
        }
    }
    //if(*p=='\0' && *q=='\0')
      //return(0);
      return(*p-*q);
}
char *strconcat(char *t,char *s)
{
    char *p,*q;
    p=s;q=t;
    while(*q!='\0')
    {
       q++;
    }
    while(*p!='\0')
    {
       *q=*p;
       p++;
       q++;
    }
    *q='\0';
    return(t);
}

char *strlower(char *str)
{
    char *p;
    p=str;
    while(*p!='\0')
    {
        if(*p>=65 && *p<=90)
          *p=*p+32;
        p++;
    }
    return(str);
}

char *strupper(char *str)
{
    char *p;
    p=str;
    while(*p!='\0')
    {
        if(*p>=97 && *p<=122)
          *p=*p-32;
        p++;
    }
    return(str);
}

void main()
{
     char str[30];
     char target[30];
     char *p;
     int len;
     printf("\nstr before strcopy=%s",str);
     printf("\nTarget before strcopy=%s",target);
     printf("\nEnter source string:");
     gets(str);

     len=strlength(str);
     printf("\nlength of %s=%d",str,len);

     p=strupper(str);
     printf("\nUpper case string=%s",p);

     p=strlower(str);
     printf("\nLower case string=%s",p);

     p=strcopy(target,str);
     printf("\nTarget after strcopy=%s",p);

     p=strconcat(target,"iise");
     printf("\nConcatenated string=%s",p);

     p=strreverse(str);
     printf("\nReversed string=%s",p);

     len=strcompare("bca","bca");
     printf("\nResult of strcompare=%d",len);

}
