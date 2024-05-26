#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,soma;
	printf("entra com um numero positivo: ");
	scanf("%d",&n);
	if(n<=0)
		printf("erro");
	else
	
		soma=0;
		for(i=1;i<=n;i++)
		{
			soma=soma+i;
		}
		printf("\n soma dos %d primeiros numeros= %d", n,soma);
	system("PAUSE");
	return 0;
}

