#include<stdio.h>
int main()
{
	int a,b,c,pa,pb,pc, premio;
	float somaI;
	printf("Qual he o investimento de cada um: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	
	somaI=a+b+c;
	
	premio=somaI*2;
		
	pa=a/somaI*premio;
	pb=(b/somaI)*premio;
	pc=(c/somaI)*premio;	
	
	printf("A reparticao do premio he: \n O primeiro ivestidor %d \n O segundo ivestidor %d \n O terceiro ivestidor %d \n", pa,pb,pc);
	return 0;
}
