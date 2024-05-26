#include<stdio.h>
int main()
{
	int i, alunos, engenharia,economia,direito,letra, codigo, total;
	printf("Numero de estudantes: ");
	scanf("%d",&alunos);
	if(alunos<=0)
		printf("ERRO");
	else
		for(i=1;i<=alunos;i++)
		{
			printf("\n Os cursos sao: \n 1-Engenharia \n 2-Economia \n 3-Direito \n 4-Letra \n");
			printf("\nEscolhe o curso: ");
			scanf("%d",&codigo);
			if(codigo==1)
				engenharia++;
			else if (codigo==2)
				economia++;
			else if (codigo==3)
				direito++;
			else if (codigo==4)
				letra++;
		}
		printf("\n Os estudantes de Engenharia sao: %d \n Os estudantes de Economia sao: %d \n Os estudantes de Direito sao: %d \n Os estudantes de Letra sao: %d", engenharia, economia,direito,letra );
		total=engenharia+economia+direito+letra;
		engenharia=(engenharia*100)/total;
		economia=(economia*100)/total;
		direito=(direito*100)/total;
		letra=(letra*100)/total;
		printf("\n Os estudantes de Engenharia sao: %d porcento \n Os estudantes de Economia sao: %d porcento \n Os estudantes de Direito sao: %d porcento \n Os estudantes de Letra sao: %d porcento", engenharia, economia,direito,letra );
	return 0;
}
