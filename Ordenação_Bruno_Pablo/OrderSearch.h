#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void SelectionSort(char vetorDeNomesPassado[][10],int numeroDeElementos)
{

    int posicao, proximaPosicao, armazenarResultadoDeComparacaoDeString;
	char auxiliarArmazenadorPraTroca[10];

    for(posicao=0;posicao<=numeroDeElementos-1;posicao++)
    {
        for(proximaPosicao=posicao+1 ; proximaPosicao<=numeroDeElementos-1; proximaPosicao++)
        {
			armazenarResultadoDeComparacaoDeString = strcmp(vetorDeNomesPassado[posicao],vetorDeNomesPassado[proximaPosicao]);
			if(armazenarResultadoDeComparacaoDeString > 0)
			{
				strcpy(auxiliarArmazenadorPraTroca, vetorDeNomesPassado[posicao]);
				strcpy(vetorDeNomesPassado[posicao], vetorDeNomesPassado[proximaPosicao]);
				strcpy(vetorDeNomesPassado[proximaPosicao],auxiliarArmazenadorPraTroca);
			}
		}
    }
}

int PesquisaBinaria(int numeroDeElementos, char vetorDeNomesPassadoPraPesquisa[][10], char nomePesquisadoPassado[10])
{
	int inicio=0, fim=numeroDeElementos-1, meio, resultado=0;
	
	SelectionSort(vetorDeNomesPassadoPraPesquisa, numeroDeElementos);

	while(inicio<=fim)
	{
		meio=(inicio+fim)/2;
		if (strcmp(nomePesquisadoPassado,vetorDeNomesPassadoPraPesquisa[meio])==0)
		{
			resultado=1;
			break;
		}

		else if(strcmp(nomePesquisadoPassado,vetorDeNomesPassadoPraPesquisa[meio])>0)
		{
			inicio=meio+1;
		}

		else
		{
			fim=meio-1;
		}
	}
	
	return resultado;
 
}
