# include <stdio.h>
int main()
{
	int x,y;
	printf("digita o valor de X e de Y: \n");
	scanf("%d %d", &x,&y);
	
	if(x==0)
	{
		if(y==0)
			printf("Esta na origem 0");
		else
			printf("Esta sobre o eixo Y (-1)");
	}
	else if(y==0)
			printf("Esta sobre o eixo X (-1)");
		else if(0<x)
			{
				if(0<y)
					printf("Esta no quadrante 1");
				else
					printf("Esta no quadrante 4");	
			}
			else if(0<y)
					printf("Esta no quadrante 2");
				 else
				 	printf("Esta no quadrante 3");
		
}
