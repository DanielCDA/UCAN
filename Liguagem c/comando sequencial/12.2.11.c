#include <stdio.h>
int main()
{
	int segundoTotal, hora, min, segundo, minTotal;
	scanf("%d",&segundoTotal);
	
	minTotal=segundoTotal/60;
	hora=minTotal/60;
	min=minTotal%60;
	segundo= segundoTotal%60;
	
	printf(" hora=%d",hora);
	printf(" minto=%d",min);
	printf(" segundo=%d",segundo);
	return 0;
}
