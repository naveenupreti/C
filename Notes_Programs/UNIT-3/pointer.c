#include <stdio.h>
int main(void)
{
    int arr[] = {10, 20};
    int *p = arr;
    *p++;
    printf("arr[0] = %d, arr[1] = %d, *p = %d",arr[0], arr[1], *p);
    return 0;
}
/*
Output:
arr[0] = 10, arr[1] = 20, *p = 20
*/

#include <stdio.h>
int main()
{
    int i,y,a[]={10,20,30,40,50};
    int *p;
    p=a;
    for(i=0;i<5;i++)
        printf("\na[%d]=%d,address=%u",i,a[i],&a[i]);
    printf("\np=%u\n",p);

    y=*p++; //y=*(p++);y=*p;p=p+1; // post increment has higher precedence than *
    printf("\ny=*p++; //y=*p;p=p+1;\tp=%u,y=%d",p,y);

    y=*++p;//p=p+1;y=*p; //++ and * have same precedence with R to L associativity
    printf("\ny=*++p;//p=p+1;y=*p;\tp=%u,y=%d",p,y);

    y=(*p)++;//y=*p;*p=*p+1;
    printf("\ny=(*p)++;//y=*p;*p=*p+1;\tp=%u,y=%d",p,y);

    y=++*p;//y=++(*p); *p=*p+1;y=*p; //++ and * have same precedence with R to L associativity
    printf("\ny=++*p;//y=++(*p); *p=*p+1;y=*p;\tp=%u,y=%d",p,y);
}
/*
Output:
a[0]=10,address=3220637392
a[1]=20,address=3220637396
a[2]=30,address=3220637400
a[3]=40,address=3220637404
a[4]=50,address=3220637408
p=3220637392

y=*p++; //y=*p;p=p+1;   p=3220637396,y=10
y=*++p;//p=p+1;y=*p;    p=3220637400,y=30
y=(*p)++;//y=*p;*p=*p+1;        p=3220637400,y=30
y=++*p;//y=++(*p); *p=*p+1;y=*p;        p=3220637400,y=32
*/
