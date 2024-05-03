#include <stdio.h>
int main()
{
	int numViagem, distPercurso, numTuristaEntro,numTuristAtulisado, numTuristaSaio,numTuristAtulisadoSaio, embarcOrigem, embarcFinal, totalKmpercorrido, turistAbordo,v;
	float custPassTurista, qtdCombustGasto, custCombus, valorPago, lucro, percturista, custTotalCombustGast,valorArrecadd, totalGanhoEmbarc, totalCombustGasto, totaLucro;
	printf("\n entra com o numero de viagens: ");
	scanf("%d",&numViagem);
	
	if(numViagem<=0)
		printf("\n ERRO: faca no minimo uma viagem");
	else
	{
		numTuristAtulisado=0;
		numTuristAtulisadoSaio=0;
		totalKmpercorrido=0;
		totalCombustGasto=0;
		totalGanhoEmbarc=0;
		totaLucro=0;
		
		for(v=1;v<=numViagem;v=v+1)
		{
			printf("\n Embarcadouro Origem: (Km): ");
			scanf("%d",&embarcOrigem);
			printf("Clientes Entraram: ");
			scanf("%d",&numTuristaEntro);
			printf("Clientes sairam: ");
			scanf("%d", &numTuristaSaio);
			
			numTuristAtulisado=numTuristAtulisado+numTuristaEntro;
			numTuristAtulisadoSaio=numTuristAtulisadoSaio+numTuristaSaio;
							
			turistAbordo = numTuristAtulisado-numTuristAtulisadoSaio;
			percturista = (6*80)/100.0;
			if(turistAbordo>percturista)
			{
				percturista = (6*100)/100.0;
				if(turistAbordo<=percturista)
				{
					printf("Embarcadouro Destino: (Km): ");
					scanf("%d",&embarcFinal);
					if(embarcOrigem>0)
					{
						if(embarcFinal>0)
						{
							if(embarcOrigem>embarcFinal)
							{
								distPercurso = embarcOrigem-embarcFinal;
								custPassTurista= 250*distPercurso;
								qtdCombustGasto= (3.5*distPercurso)/10.0;
								
								custCombus= 1500*qtdCombustGasto;
								valorArrecadd= custPassTurista*turistAbordo;
								lucro= valorArrecadd-custCombus;
										
								totalKmpercorrido= totalKmpercorrido+distPercurso ;
								totalCombustGasto= totalCombustGasto+custCombus;
								totalGanhoEmbarc= totalGanhoEmbarc+valorArrecadd;
								totaLucro=totaLucro+lucro;
								printf("\n distancia percorrida: %d km \n custo da passagem por turista: %.2f kz \n Quantidade de Combudtivel Gasto: %.2f litro \n Cuto com o Combustivel: %.2f \n Valor arrecadado: %.2f \n Lucro: %.2f", distPercurso, custPassTurista, qtdCombustGasto, custCombus, valorArrecadd, lucro);
							}		
							else
								if(embarcOrigem<embarcFinal)
								{
									distPercurso = embarcFinal-embarcOrigem;
									custPassTurista= 350*distPercurso;
									qtdCombustGasto= (6*distPercurso)/10.0;
									
									custCombus= 1500*qtdCombustGasto;
									valorArrecadd= custPassTurista*turistAbordo;
									lucro= valorArrecadd-custCombus;
											
									totalKmpercorrido= totalKmpercorrido+distPercurso ;
									totalCombustGasto= totalCombustGasto+custCombus;
									totalGanhoEmbarc= totalGanhoEmbarc+valorArrecadd;
									totaLucro=totaLucro+lucro;
									printf("\n distancia percorrida: %d km \n custo da passagem por turista: %.2f kz \n Quantidade de Combudtivel Gasto: %.2f litro \n Cuto com o Combustivel: %.2f \n Valor arrecadado: %.2f \n Lucro: %.2f", distPercurso, custPassTurista, qtdCombustGasto, custCombus, valorArrecadd, lucro);
								}
								else
								{
									printf("\n ERRO: o embarcadouro destino he igual a embarcadouro origem");
									numViagem=numViagem+1;	
								}
						}
						else
						{
							if(embarcFinal<0)
							{
								printf("\n ERRO: Km do Embarcadouro deve ser gandesa nao negativa");
								numViagem=numViagem+1;
							}
						}
					}
					else
					{
						if(embarcOrigem<0)
						{
							printf("\n ERRO: Km do Embarcadouro deve ser gandesa nao negativa");
							numViagem=numViagem+1;
						}
					}
				}	
				else
				{
					printf("\n ERRO: Exesso de lotacao. O Limite maximo he de 6 pessoas");
					numTuristAtulisado=numTuristAtulisado-numTuristaEntro;
					numViagem=numViagem+1;
				}
			}
			else
			{
				printf("\n ERRO: Falta passageiros abordo para poder partir. O Limite minimo he de 5 pessoas");
				numTuristAtulisadoSaio=numTuristAtulisadoSaio-numTuristaSaio;
				numViagem=numViagem+1;
			}			
		}		
		printf("\n fim da viagem:  \n Total de kilometro percorridos:%d \n Custo Totalde Combustivel Gasto: %.2f \n Total arrecadado pela Embarcacao:%.2f \n total do Lucro: %.2f", totalKmpercorrido, totalCombustGasto, totalGanhoEmbarc, totaLucro);	
	}
	return 0; 
}
