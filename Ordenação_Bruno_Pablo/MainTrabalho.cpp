#include<stdio.h>
#include "OrderSearch.h"
#define NOMES 5
#define CARACTERES 10

int main()
{
	int selecao, linhas=0, /*nomeEncontrado,*/ contadorLinhas, resultadoDebusca, resultado;
	char vetorNomes[NOMES][CARACTERES],nomeEntrado[CARACTERES];
	
	do
	{
		printf("\n1 - Inserir Nome\n2 - Ordenar Nomes\n3 - Pesquisar Nome\n4 - Listar Nomes\n5 - Encerrar Programa\n");
		scanf("%d", &selecao);
		switch (selecao)
		{	
			case 1:
			{
				if(linhas < 5)
				{
					printf("Escreva o nome: ");
					scanf(" %s", &nomeEntrado);
					resultadoDebusca=PesquisaBinaria(linhas, vetorNomes, nomeEntrado);
					if (resultado==1)
					{
						printf("\nNome ja existente, nao podera ser adicionado");
					}
				    else
				    {
						strcpy(vetorNomes[linhas], nomeEntrado);
						printf("\nNome adicionado\n");
					}
					linhas++;
					
				}
				else
				{
					printf("\nLimite de nomes atingido\n");
				}
			}
			break;
			
			case 2:
			{
				SelectionSort(vetorNomes, linhas);
				printf("\nNomes Ordenados\n");
			}
			break;

			case 3:
			{
				printf("\nEscreva o nome a ser procurado: \n");
				scanf(" %s", &nomeEntrado);
				resultadoDebusca=PesquisaBinaria(linhas, vetorNomes, nomeEntrado);
				if(resultadoDebusca==1)
				{
					printf("\nNome Encontrado\n");
				}
				else
				{
					printf("\nNome nao encontrado\n");
				}
			}
			break;

			case 4:
			{
				contadorLinhas=0;
				for(contadorLinhas=0; contadorLinhas<=linhas; contadorLinhas++)
				{
					printf(" %s\n", vetorNomes[contadorLinhas]);
				}
			}
			break;
			case 5:
                {
                }
                break;
			default:
				printf("Opcao invalida!");
			break;
		}
	} while(selecao<5 && selecao!=0);
	
	return 0;
}
