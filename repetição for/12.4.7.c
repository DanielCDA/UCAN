#include <stdio.h>
int main()
{
	int i,numerodeVezes,numero,a,b,c,d,e,f;
	printf("O numero de vezes: ");
	scanf("%d",&numerodeVezes);
	
	if(numerodeVezes<0)
		printf("ERRO");
	else
		a=b=c=d=e=f=0;
		printf("\n Escreva os numeros: ");
		for( i = 1 ; i <=numerodeVezes; i++)
		{
			scanf("%d",&numero);
			if(numero<0)
				a++;
			else if(numero>0 && numero<25)
				b++;
			else if(numero>25 && numero<50)
				c++;
			else if(numero>50 && numero<75)
				d++;
			else if(numero>75 && numero<100)
				e++;
			else if ( numero>100)
				f++;
		} 
		printf("\n Os numero que se encontram no intervalo de menos infinto a 0 sao: %d",a);
		printf("\n Os numero que se encontram no intervalo de 0 a 25 sao: %d",b);
		printf("\n Os numero que se encontram no intervalo de 25 a 50 sao: %d",c);
		printf("\n Os numero que se encontram no intervalo de 50 a 75 sao: %d",d);
		printf("\n Os numero que se encontram no intervalo de 75 a 100 sao: %d",e);
		printf("\n Os numero que se encontram no intervalo de 100 a mais infinito sao: %d",f);
		
		return 0;
}
