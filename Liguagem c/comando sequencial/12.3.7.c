# include<stdio.h>
int main()
{
	int a,b,c,h, soma;
	printf("Escreve os valores para verificar se sao os lados de um triangulo retangulo.\nEsccreva o valor de a, b e c:\n");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b)
	{
		if(a>c){
			if(b>c)
			{
				h=a;
				a=c;
			}
		}
		else
		{
			h=c;			
		}
	}
	else if(b>c)
		{
			if(a>c)
			{
				h=b;
				b=c;
			}
		}
		else
			h=c;
	h=h*h;
	soma=(a*a)+(b*b);
	if(soma==h)
		printf("Eles sao os lados de um triangulo retangulo");
	else
		printf("Eles nao sao os lados de um trinagulo retangulo");
	return 0;
	
}
