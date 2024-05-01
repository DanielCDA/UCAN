# include <stdio.h>
int main()
{
	int primeiro, segundo, terceiro;
	
	primeiro=(46*1000000)/100;
	segundo=(32*1000000)/100;
	terceiro=1000000-(primeiro+segundo);
	
	printf("\n O prieiro vencedor levara %d kZ \n O segundo vencedor levara %d kz \n O vencedor terceiro levara %d kz", primeiro, segundo, terceiro);
	return 0;
}
