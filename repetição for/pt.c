#include<stdio.h>
int main()
{
	int n,i,d;
	printf("escreva o valor de calculo:");
	scanf("%d",n);
	if(n<0)
		printf("\n ERRO");
	else
		{
			s=0.0;
			i=1;
			while(i<=n)
			{
				if (i%2==0)
					s= s-((2+i)/(2+i)+1);
				else
					s= s-((2+i)/(2+i)+1);
				i+=1;
			}
			printf("\n valor he %f ",s );
		}
	return 0;
}
