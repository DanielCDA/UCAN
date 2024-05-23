#include <stdio.h>
int main()
{
	int velocidade, percentagem, vMax, ponto;
	float multa, vdes,vVint;
	printf(" qual e a velocidade do altomovel ");
	scanf("%d",&velocidade);
	printf("\n qual e a velocidade maxima da localidade ");
	scanf("%d",&vMax);
	
	vdes=(vMax*110)/100;
	vVint=(vMax*120)/100;
	
	if(velocidade>vdes)
		if(velocidade>vVint)
		{
			multa=30000;  
			ponto=7;
		}
		else
		{
			multa=15000;
			ponto=4;
		}
	printf("\n multa=%.2f",multa);
	printf("\n ponto=%d",ponto);
	return 0;
}
		
