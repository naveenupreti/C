//File copy program with command line arguments
//Name of this file  is “filecopycla.c”
#include<stdio.h>
main(int argc, char *argv[])
{
	FILE *fs,*ft;
	char ch;
	if(argc!=3)
	{
		puts("Insufficient arguments");
		exit(0);
	}
	fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		puts("Cannot open source file");
		exit(0);
	}
	ft=fopen(argv[2],"w");
	if(ft==NULL)
	{
		puts("cannot open target file");
		fclose(fs);
		exit(0);
	}
	while(!feof(fs))
	{
		ch=fgetc(fs);
		fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
}

