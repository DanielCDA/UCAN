# include<stdio.h>
int main()
{
	int a;
	printf("escreve um numero: ");
	scanf("%d",&a);
	
	if(a<0)
		a=a*-1;
		
	printf("o seu valor absoluto he: %d", a);
	return 0;
}
