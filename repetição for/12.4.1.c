#include<stdio.h>
int main()
{
	int n,i;
	printf("digita um numero: ");
	scanf("%d",&n);
	if(n<0)
		printf("ERRO");
	else
		printf("Os primeiros numeros impar de %d sao: ", n);
		for(i=1;i<n;i=i+2)
		printf("\n %d",i);
	return 0;
}
