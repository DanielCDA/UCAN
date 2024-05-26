#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int numero, i, n, cont;
    printf("entra com um numero positivo: ");
    scanf("%d", &numero);
    if(numero<0)
    	printf("ERRO");
    else
    	cont=0;
     	for(i = 1; i <= numero; i++)
     	{
     		n= numero % i;
     		if(n == 0)
     		{
     			cont++;
			 }
		 }
		 printf("%d",cont);
     	if(cont <= 2)
     		printf("\n o %d eh primo",numero);
     	else
     		printf("\n o %d nao eh primo",numero);
 
    return 0;
}


