#include<stdio.h>
int main()
{
	int soma ,n, unidez, contMil, qtd;
	soma=0, qtd=0;
	for(n=1000;n<=9999;n+=1);
	{
		unidez=n%100;
		contMil= n/100;
		soma=unidez+contMil;
		if(soma * soma==n)
		{
			printf("%d",n);
			qtd=qtd+1;	
		}
	}
	printf("\n total numero=%d",qtd);
	return 0;
}
