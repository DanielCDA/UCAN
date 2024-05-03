#include <stdio.h>
int main()
{
	int maior, menor, aux;
	do{
		printf("\n digita o numero: ");
		scanef("%d",&aux);
		if(aux==-1)
		{
			break;
		}
		else if(aux>maior)
			maior=aux;
		else if( aux<menor)
			menor=aux;
			
	}while(1);
	printf("\n o maior numero he %d", maior);
	printf("\n menor numero he %d",menor);
	return 0;
}
