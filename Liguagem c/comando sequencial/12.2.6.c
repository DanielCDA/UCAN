# include <stdio.h>
int main()
{
	int numero, unidade,dezena,centena, soma;
	printf("escreva um numero menor que mil: ");
	scanf("%d",&numero);
	numero<1000;
	centena=numero/100;
	dezena=(numero%100) /10;
	unidade=((numero%100)%10)/1;
	soma=centena+dezena+unidade;
	printf("a soma dos algarismo he %d", soma);
	return 0;
}
