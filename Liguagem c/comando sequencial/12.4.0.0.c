#include <stdio.h> /* incluir as funções scanf() e printf() */
#include <stdlib.h> /* incluir a função system() */
int main()
 {
 	int nAlunos, nota1, nota2, nota3, i;
 	float mediaAluno;
 	printf (" \n Entre com o total de alunos: "); 
 	scanf ("%d", &nAlunos);
 	for (i = 1 ; i <= nAlunos ; i = i+1)
 	{
		printf (" \n Entre com a primeira nota: "); 
		scanf ("%d",&nota1);
		printf (" \n Entre com a segunda nota: ");
		scanf ("%d",&nota2);
		printf (" \n Entre com a terceira nota: ");
		scanf ("%d",&nota3); 
		
		mediaAluno = (nota1 + nota2 + nota3) / 3.0;
		printf (" \n Media = %.2f ", mediaAluno);
		if (mediaAluno >= 10.0) 
			printf(" Aprovado ");
		else 
	 		printf(" Reprovado ");
	 } 
 	system("PAUSE");
 	return 0;
 } 
