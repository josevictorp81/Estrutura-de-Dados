#include "biblioteca.h"//Chamando a biblioteca criada
int main()
{
	//estrutura para ler as numeros informados 
	struct dados
	{
		int num;
	}numero;
	
	int op, tam, aux;//declarando as variaveis aux, opcao e tamanho
	Dados *bancoDados;//declarando a variavel bancoDados do tipo Dados 
	
	bancoDados = criar();//chama a funcao criar
	
	//system("color F9");
	do
	{
		menu();//chama menu
		printf(" Escolha uma opcao: ");
		scanf("%d", &op);
		system("cls");//limpar tela
		
		switch(op)
		{
			case 1:
				printf("\tInserir Dados\n");
				printf("Numero: ");
				fflush(stdin);//limpa o buffer do teclado
				scanf("%d", &numero.num);
				bancoDados = inserir(bancoDados, numero.num);//chama inserir
				system("pause");//pausar
				system("cls");//limpar tela
				break;
			case 2:
				printf("\tBuscar\n");
				printf("Numero: ");
				fflush(stdin);//limpa o buffer do teclado
				scanf("%d", &numero.num);
				aux = buscar(bancoDados, numero.num);//chama buscar
				if(aux == 0){
					printf("Numero nao encontrado\n");
				}
				else{
					printf("Numero: %d encontrado!\n", aux);
				}
				system("pause");//pausar
				system("cls");//limpar tela
				break;
			case 3:
				printf("\tImprimir todos os numeros\n");
				imprimir(bancoDados);//chama imprimir
				system("pause");//pausar
				system("cls");//limpar tela
				break;
			case 4:
				printf("\tImprimir tamanho da lista\n\n");
				tam = tamanhoLista(bancoDados);//chama tamanho da lista
				printf("A lista tem: %d numero(s)\n\n", tam);
				system("pause");//pausar
				system("cls");//limpar tela
				break;
			case 5:
				printf("\tVerificar Par/Impar\n");
				verificaParImpar(bancoDados);//chama verifica par/impar
				system("pause");//pausar
				system("cls");//limpar tela
				break;
			case 6:
				printf("\tExcluir\n");
				printf("Numero: ");
				fflush(stdin);//limpa o buffer do teclado
				scanf("%d", &numero.num);
				bancoDados = excluir(bancoDados, numero.num);//chama excluir
				system("pause");//pausar
				system("cls");//limpar tela
				break;
			default:
				if(op > 6){
					printf("Esta opcao nao existe!\n");
					system("pause");//pausar
					system("cls");//limpar tela
				}
				break;
		}

	}
	while(op != 0);//enqunto opcao for diferente de 0 continua executando

	return 0;
}
