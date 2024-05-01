#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int numSorteado, numApostado, cont = 1, jogada =1, dezena1, dezena2, unidade1, unidade2;
	float qtdApostadokz = 1.00, ganho, lucro, lucroTotal = 0.00;
	printf("                                            Cassino Meu-Camba ");
	
	while( qtdApostadokz != 0 )
	{
		jogada = cont;
		printf("\n________________________________________________________________________________________________\n");
		printf(" Jogada %d \n", jogada);
		printf("\n Quantidade apostada: KZ ");
		scanf("%f",&qtdApostadokz);
		if ( qtdApostadokz > 0 ) 
		{
			printf(" Escolha um numero no intervalo de 1 a 50: ");
			scanf("%d",&numApostado);
			if( numApostado > 50)
			{
				printf("\n Erro, escolha o numero no intervalo sugerido");
				continue;
			}	
			else if( numApostado < 1)	
			{
				printf("\n Erro, escolha o numero no intervalo sugerido");
				continue;
			}					
			numSorteado = rand() % 51;
			printf(" Numero Sorteado: %d \n", numSorteado);
		
			dezena1 = numApostado / 10;
			unidade1 = numApostado % 10;
			dezena2 = numSorteado / 10;
			unidade2 = numSorteado % 10;
		
			if( numApostado == numSorteado )
			{
				ganho = qtdApostadokz * 5;
				lucro =  ganho - qtdApostadokz;
				lucroTotal= lucroTotal + lucro;
				cont++;
				printf("\n jogador acerto no numero sorteado");
			}	
			else if( dezena2 == unidade1 )
					if(dezena1 == unidade2)
				 		if(dezena1 != 0 )
					 		if(dezena2 != 0 )
							{		
						 		ganho = qtdApostadokz * 3;
								lucro =  ganho - qtdApostadokz;
								lucroTotal= lucroTotal + lucro;
								cont++;
						 		printf("\n Jogador acerto no numero sorteado na ordem inversa ");	
							}		
			if ( dezena1 == dezena2)
				if(dezena1 != 0 )
				{
					ganho = qtdApostadokz * 2;
					lucro =  ganho - qtdApostadokz;
					lucroTotal= lucroTotal + lucro;
					cont++;
					printf("\n Jogador acerto na dezena do numero sorteado");
				}
			if ( jogada == cont)
				if (unidade1 == dezena2 )
					{
						ganho = qtdApostadokz * 2;
						lucro =  ganho - qtdApostadokz;
						lucroTotal= lucroTotal + lucro;
						cont++;
						printf("\n Jogador acerto na dezena do numero sorteado");
					}
			if (jogada == cont)
				if ( unidade1 == unidade2)
					{
						ganho = qtdApostadokz * 2;
						lucro =  ganho - qtdApostadokz;
						lucroTotal= lucroTotal + lucro;
						cont ++;
						printf("\n Jogador acerto na unidade do numero sorteado");
					} 
			if (jogada == cont)
				if ( numApostado == dezena2 + unidade2)
					{
						ganho = qtdApostadokz * 2;
						lucro =  ganho - qtdApostadokz;
						lucroTotal= lucroTotal + lucro;
						cont++;
						printf("\n Jogador acerto na soma dos digitos do numero sorteado");
				 	} 
					if (jogada == cont)
						if ( numApostado % 2 == 0)
							if ( numSorteado % 2 == 0)
							{
								ganho = qtdApostadokz ;
								lucro =  ganho - qtdApostadokz;
								cont++;
								printf("\n jogador acerto na paridade dos numeros sorteado");
							}
			if (jogada == cont)	
				if ( numApostado % 2 != 0)
					if ( numSorteado % 2 != 0)
					{
						ganho = qtdApostadokz ;
						lucro =  ganho - qtdApostadokz;
						cont++;
						printf("\n jogador acerto na paridade dos numeros sorteado");
					} 
			if (jogada == cont)
			{
				ganho = qtdApostadokz - qtdApostadokz ;
				lucro = qtdApostadokz;
				lucroTotal= lucroTotal - lucro;
				cont++;
				printf("\n Jogador nao acertou no numero soreteado");
			}
			printf("\n---------------------------------------------------------------------------------------------------\n");
			printf(" Cassino Pagou: KZ %.2f \n jogador ganhou: KZ %.2f  \n", ganho, lucro);
			printf("---------------------------------------------------------------------------------------------------\n");		
			if( lucroTotal < 0 )
				printf("\n Ate agora o jogador tem um prejuizo: %.2f kz", lucroTotal * -1);						
			else 
				printf("\n Ate agora o jogador tem um lucro: %.2f kz", lucroTotal);					
		}
	}
	printf("\n________________________________________________________________________________________________\n");
	if( lucroTotal < 0)
		printf("\n Apos uma sequencia de %d jogadas, o jogador perdeo %.2f kz ", jogada - 1, lucroTotal * -1);
	else
		printf("\n Apos uma sequencia de %d jogadas, o jogador ganho %.2f kz ", jogada - 1, lucroTotal);
	return 0;
}
