#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Escreve os respectivos numeros: \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			if(b>c)
				printf("O maior numero he: %d\n O menor numero he: %d", a,c);
			else
				printf("O maior numero he: %d\n O menor numero he: %d", a,b);
		}
		else
			printf("O maior numero he: %d \n O menor numero he: %d", c,b);
	}
	else if(b>c)
		{
			if(a>c)
				printf("O maior numero he: %d \n O menor numero he: %d", b,c);
			else
				printf("O maior numero he: %d \n O menor numero he: %d", b,a);
		}
		else
			printf("O maior numero he: %d \n O menor numero he: %d", c,a);
	return 0;
	
}
