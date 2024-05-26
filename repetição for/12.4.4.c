#include <stdio.h>
int main()
{
	int numero,par,impar;
	par=0;
	impar=0;
	printf("escreva uma sequencia numerica (digita -2 para sair): \n");
	for(;;)
	{
		scanf("%d",&numero);
		
		if(numero == -2){
			break;
		}
		if(numero<0){
			printf("ERRO");
		}
		else
			if(numero % 2 == 0){
				par++;
			}
			else
			{
				impar++;
			}
	}
	printf("\n sao %d pares e %d impares", par, impar);
	return 0;
}
