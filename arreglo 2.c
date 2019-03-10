#include <stdio.h>
int main()
{
	int ca[5];
	int a,b=0,c=0;
	for(b;b<5;b++)
	{
		printf("dame tus  calificaiones\n");
		scanf("%d",&ca[b]);
		c +=ca[b];
		printf("\n");
		
		
	}
	printf("%d",c/5);
	return 0;
	
}

