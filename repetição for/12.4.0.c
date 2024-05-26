#include<stdio.h>
int main()
{
	int i, nota1, nota2,nota3, numeroEstudante, media;
	printf("quantos estudantes sao: ");
	scanf("%d",&numeroEstudante);
	for(i=1;i<=numeroEstudante;i++)
	{
		printf("a primeira nota: ");
		scanf("%d",&nota1);
		
		printf("notas 2: ");
		scanf("%d",&nota2);
		
		printf("a notas3: ");
		scanf("%d",&nota3);
		
		media=(nota1+nota2+nota3)/3;
		printf("A media=%d", media);
	
		if(media<9)
			printf("\n reprovado");
		else
		    printf("\n aprovado");
	}		
	
		return 0;
}
