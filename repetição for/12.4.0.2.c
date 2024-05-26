#include<stdio.h>
int main()
{
	int n,i,fat;
	printf("digita um numero para mostra o seu factoria: ");
	scanf("%d",&n);
	if(n<0)
		printf("ERRO");
	else
		fat=1;
		for(i=1;i<=n;i++)
			fat=fat*i;
		printf("mostra o fatorial de %d he = %d", n,fat);
	return 0;
}
