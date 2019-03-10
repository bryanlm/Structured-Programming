#include <stdio.h>
int main()
{
	int suma=0;
	int r[5];
	int a=1 ,x=0;
	while(a<=5)
	{
		r[x]=a;
		a++ ;
		x++ ;
		suma=r[x];
	}
	
	printf("%d",suma);
	
}

