# include<stdio.h>
int main()
{
	float peso,altura, imc;
	printf("O peso da pessoa: ");
	scanf("%d",&peso);
	printf("\n A altura da pessoa: ");
	scanf("%d",&altura);	
	
	imc=peso/altura;
	if(imc<40)
	{
		if(imc>30)
				printf("Obesidade leve");
		else if(imc>25)
				printf("Excesso de peso");
			else if(imc>=20)
					printf("Normal");
				else if(imc<20)
						printf("Desnutrido");
	}
	else 
		printf("Obesidade grave");
	return 0;
}
