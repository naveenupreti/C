#include<stdio.h>
void main()
{
    FILE *fp;
    int i,n,m,a[10],b[10];
    fp=fopen("integer.txt","wb");
    if(fp==NULL)
    {
        printf("\nCannot open the file for writing");exit(0);
    }
    printf("\nHow many numbers do you want to enter:");
    scanf("%d",&n);
    printf("\nEnter the numbers:\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    m=fwrite(a,sizeof(int),n,fp);
    printf("\nm=%d",m);
    fclose(fp);
    fp=fopen("integer.txt","rb");
    if(fp==NULL)
    {
        printf("\nCannot open the file for reading");exit(0);
    }
    fread(b,sizeof(int),m,fp);
    for(i=0;i<m;i++)
      printf("\nb[%d]=%d",i,b[i]);
}
