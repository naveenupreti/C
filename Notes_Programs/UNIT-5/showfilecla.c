//Emulation of TYPE command of DOS with command line arguments
//Name of this file  is “showfilecla.c”
#include<stdio.h>
main(int argc, char *argv[])
{
	FILE *fs;
	char ch;
	if(argc!=2)
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
	while(!feof(fs))
	{
		ch=fgetc(fs);
		//printf("%c",ch);
		fprintf(stdout,"%c",ch);
	}
	fclose(fs);
}

