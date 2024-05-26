#include<stdio.h>
int main()
{
	int  i, n, idade, outraIdade, media;
	printf("Quantas pessoas sao: ");
	scanf("%d",&n);
	if(n<0)
		printf("ERRO");
	else
		idade=0;
		for(i=1;i<=n;i++)
		{
			printf("Idade: ");
			scanf("%d",&outraIdade);
			idade=idade+outraIdade;
		}
		media=idade/n;
		printf("A idade media he de %d",media);
		return 0;			
}
