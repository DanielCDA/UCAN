#include <stdio.h>
int main()
{
	int menor, centena, dezena, unidade, soma;
	scanf("%d",&menor);
	
	centena= menor/100;
	dezena= menor%100/10;
	unidade= menor%10;
	
	soma= centena+ dezena+unidade;
	
	printf("o resto centena=%d, dezena=%d, unidade=%d",centena,dezena,unidade);
	printf("\n o somatorio=%d",soma);
	return 0;
}
