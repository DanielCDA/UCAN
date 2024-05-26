#include<stdio.h>
int main ()
{
	int numero, factorial, i;
	printf("numero de factoria: ");
	scanf("%d", &numero);
	factorial = 1;
	for(i = 1; i <= numero; i++)
	{
		factorial= factorial*i;
	}
	printf("\n o factorial de %d eh %d", numero, factorial);
	return 0;
}
