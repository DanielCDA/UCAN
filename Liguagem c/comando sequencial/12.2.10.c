# include <stdio.h>
int main()
{
	float qtdkz, euro, dolar, rand, libra;
	printf("digita o valor em kwanza: ");
	scanf("%f",&qtdkz);
	
	euro=qtdkz/14.0;
	dolar=qtdkz/10.0;
	rand=qtdkz/3,50;
	libra=qtdkz/15,30;
	
	printf("A convercao: %fE %fDl  %fRd %fLb", euro,dolar,rand,libra);
	return 0;
}
