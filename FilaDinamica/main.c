#include"fila.c"
int main()
{
	Fila *xFila;
	
	int i, n;
	
	xFila = inicializarFila();
	
	do
	{
		menu();
		scanf("%d", &i);
		
		switch (i)
		{
		case 1:
			printf("\tDigite o elemento:");
			scanf("%d", &n);
			xFila = enfileirar(xFila, n);
			break;
		case 2:
			printf("\tFila vazia\n");
			filaVazia(xFila);
			break;
		case 3:
			printf("\tFila cheia\n");
			filaCheia(xFila);
			break;
		case 4:
			printf("\tImprimir\n");
			imprimir(xFila);
			break;
		case 5:
			printf("\tImprimir Reversa\n");
			imprimiReversa(xFila);
			break;
		case 6:
			printf("\tTopo\n");
			topo(xFila);
			break;
		case 7:
			printf("\tDigite o elemento:");
			scanf("%d", &n);
			elimina(xFila, n);
			break;
		case 8:
			printf("\tDesenfileirar\n");
			xFila = desinfileirar(xFila);
			break;
		default:
			break;
		}
	}
	while(i != 0);

	return 0;
}