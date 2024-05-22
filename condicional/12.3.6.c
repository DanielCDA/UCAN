# include<stdio.h>
int main()
{
	int thoraF,thoraE;
	float gratificacao, premio;
	printf("Total de horas em falta: ");
	scanf("%d",&thoraF);
	printf("Total de horas extraordinaria: ");
	scanf("%d",&thoraE);
	
	gratificacao=thoraE-(thoraF*3/4.0);
	
	if(gratificacao>40)
	{
		premio=(gratificacao*50)/100;
		printf("O premio sobre o salario he de 50 porcento de %.2f o seu premio equivale a mais %f", gratificacao, premio);
	}
	else if(gratificacao>30)
		printf("O premio sobre o salario he 40");
	else if(gratificacao>20)
		{
			premio=(gratificacao*30)/100;
			printf("O premio sobre o salario he de 30 porcento de %.2f o seu premio he de %.2f", gratificacao, premio);
		}
	else if(gratificacao>10)
		printf("O premio sobre o salario he 20");
	else
	{
		premio=(gratificacao*10)/100;
		printf("O premio sobre o salario he de 10 porcento de %.2f o seu premio he de %.2f", gratificacao, premio);
	}
	return 0;
}
