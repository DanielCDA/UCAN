#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, unidade, dezena, centena, milhar, p;
	printf("\n digita o numero: ");
	scanf("%d",&n);
	if(n<999)
	 {
		printf("erro");
		system("PAUSE");
		return 0;
	 }
	if(n>9999)
	 {
		printf("\n ERRO: O NUMERO DEVE SER MENOR OU IGUAL 9999");
		system("PAUSE");
		return 0;
	 }
	unidade= n%10;
	n=n/10;
	dezena=n%10;
	n=n/10;
	centena = n%10;
	n=n/10;
	milhar=n;
       
	printf("\n a permutacao do numero: %d%d%d%d", unidade, dezena, centena, milhar );
	system("PAUSE");
	return 0;
}
