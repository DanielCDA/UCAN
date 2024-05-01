#include<stdio.h>
#include<stdlib.h>
int main()
{
	int aluno, sala1,sala2,sala3, sala4, sala5;
	printf("\n escreva o numero de alunos: ");
	scanf("%d",&aluno);
	
	sala1=aluno/5;
	aluno=aluno-sala1;
	
	sala2=aluno/4;
	aluno=aluno-sala2;
	
	sala3=aluno/3;
	aluno=aluno-sala3;
	
	sala4=aluno/2;
	aluno=aluno-sala4;
	
	sala5=aluno/1;
	
	printf(" sala1=%d sala2=%d sala3=%d sala4=%d sala5=%d", sala1, sala2, sala3, sala4, sala5);
	system ("PAUSE");
	return 0;
}
