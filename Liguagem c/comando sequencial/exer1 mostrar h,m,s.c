#include <stdio.h>
int main()
{
	int segundoTotal, hora, min, segundo, minTotal;
	scanf("%d",&segundoTotal);
	
	min=segundoTotal/60;
	hora=min/60;
	minTotal=min-(hora*60);
	segundo= segundoTotal-(hora*3600)-(minTotal*60);
	
	printf(" hora=%d",hora);
	printf(" minto=%d",minTotal);
	printf(" segundo=%d",segundo);
	return 0;
}
