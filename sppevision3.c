#include<stdio.h>
main()
{
	FILE *p;
	char data [1000]="my name is pranjal";
	
	p=fopen("pranjal.txt","r");
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
	printf("\n==============================\n");
	p=fopen("pranjal.txt","r");
	if(p == NULL)
	{
		printf("this file is could not open.\n");
	}
	else
	{
		while(fgets(data,28,p)!=NULL)
		{
			printf("%s,data");
		}
	}
	fclose(p);
}
