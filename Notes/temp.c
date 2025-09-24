//File copy program
#include<stdio.h>
main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("filecopy.c","r");
	if(fs==NULL)
	{
		puts("cannot open source file");
		exit(0);
	}
	ft=fopen("c:/abc/copyfile.c","w");
	if(ft==NULL)
	{
		puts("cannot open target file");
		fclose(fs);
		exit(0);
	}
   while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		{
			puts("file copied successfully");
			break;
		}
		else
			fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
}
ÿ