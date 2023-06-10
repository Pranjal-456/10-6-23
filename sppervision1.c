#include<stdio.h>
main()
{
	FILE *P;
	char data[1000]="pranjal..";
	
	p=fopen("pranjal.txt","w");
	if(p == NULL)
	{
		printf("this file is could not open.\n");
	}
	else
	{
		printf("enter data you go to input in txt file=");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successfully ....");
	}
	fclose(p);
	
}
