#include "pilha.h"

int main(int argc, char** argv)
{
	Pilha* pilhaDados;
	
	int op, aux, valor;
	
	pilhaDados = cria();
	
	do{
		menu();
		printf("Opcao: ");
		scanf("%d",&op);
		system("cls");
		
		switch(op)
		{
		case 1:
			printf("\n\tInserir\n\n");
			printf("Valor: ");
			fflush(stdin);
			scanf("%d",&valor);
			aux = inserir(pilhaDados, valor);
			if(aux == 0) printf("Erro na insercao!\n");
			else printf("Valor inserido!\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("\n\tImprimindo todos os valores!\n");
			imprimir(pilhaDados);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("\n\tVerifica vazia\n\n");
			aux = vazia(pilhaDados);
			if(aux == 1) printf("A pilha esta vazia!\n");
			else printf("A pilha nao esta vazia!\n");
			system("pause");
			system("cls");
			break;
		case 4:
			printf("\n\tVerfica tamanho\n\n");
			aux = tamanho(pilhaDados);
			printf("A pilha tem > %d < valor(es)\n", aux);
			system("pause");
			system("cls");
			break;
		case 5:
			printf("\n\tVerifica topo\n\n");
			aux = topo(pilhaDados);
			printf("%d esta no topo da pilha!\n",aux);
			system("pause");
			system("cls");
			break;
		case 6:
			printf("\n\tRemover\n\n");
			aux = remover(pilhaDados);
			if(aux == 0) printf("Erro na remocao!\n");
			else printf("Valor removido!\n");
			system("pause");
			system("cls");
			break;
		case 7:
			printf("\n\tLiberar pilha\n\n");
			liberar(pilhaDados);
			system("pause");
			system("cls");
			break;
		default:
			if(op > 7){
				printf("\nOpcao invalida!\n");
				system("pause");
				system("cls");
			}
			break;
		}
		
		
	}while(op != 0);
	
	return 0;
}