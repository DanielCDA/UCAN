# include <stdio.h>
int main ()
{
	int n, i, j, cont, receber;
	printf("Escreve um numero: ");
	scanf("%d", &n);
	printf("\n Escrve o valor de i: ");
	scanf("%d", &i);
	printf("\n Escreva o valor de j: ");
	scanf("%d", &j);
	printf("multiplos de i sao: ");
	receber=0;
	
	for(cont = 1; cont <= n; cont++)
	{
		receber= i * cont;
	printf("\n %d", receber);
	}
	
	return 0;
}
