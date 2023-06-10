#include<stdio.h>
main()
{
	FILE *P;
	char data[1000]="pranjal..";
	
	p=fopen("pranjal.txt","r");
	if(p == NULL)
	{
		printf("this file is could not open.\n");
	}
	else
	{
		while(fgets(data,28,p)!=NULL)
		{
			printf("%s",data);
		}
    }
	fclose(p);
	
}

