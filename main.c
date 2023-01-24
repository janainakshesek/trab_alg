#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ordenacao.h"


int main(){
	char nome[MAX_CHAR_NOME];
	int idxBusca;
	int numComp;

	//Dica: somente é posśivel criar vetores grandes utilizando alocação dinâmica de memória
	//Veja um exemplo de alocação dinâmica a seguir
	int tamVetor = 100;
	int* vetor1 = malloc(tamVetor * sizeof(int));
	int* vetor2 = malloc(tamVetor * sizeof(int));
	int* vetor3 = malloc(tamVetor * sizeof(int));
	int* vetor4 = malloc(tamVetor * sizeof(int));
	int* vetor5 = malloc(tamVetor * sizeof(int));
	int* vetor6 = malloc(tamVetor * sizeof(int));
	int* vetor7 = malloc(tamVetor * sizeof(int));
	int* vetor8 = malloc(tamVetor * sizeof(int));

	if(vetor1 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	if(vetor2 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	if(vetor3 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	if(vetor4 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	if(vetor5 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	if(vetor6 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	if(vetor7 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	if(vetor8 == NULL){
		printf("Falha fatal. Impossível alocar memoria.");
		return 1;
	}
	//Depois de alocado, o vetor pode ser utilizado normalmente
	//Não esqueça de desalocar no final do programa via free
		

	//Nesta parte, foi utilizada a função rand para colocar no vetor números de 0 a 100 de forma aleatória.
	int i, j;
	j = 100;
	srand(time(NULL));

	for(i = 0; i < tamVetor; i++)
   		vetor1[i] = rand() % 100;
	
	for(i = 0; i < tamVetor; i++)
   		vetor2[i] = rand() % 100;
	
	for(i = 0; i < tamVetor; i++)
   		vetor3[i] = rand() % 100;

	for(i = 0; i < tamVetor; i++)
   		vetor4[i] = rand() % 100;
	
	for(i = 0; i < tamVetor; i++){
		vetor5[i] = j;
		vetor6[i] = j;
		vetor7[i] = j;
		vetor8[i] = j;
		j--;
	}


	//Nome e GRR
	getNome(nome);
	printf("Trabalho de %s\n", nome);
	printf("GRR %u\n", getGRR());
	printf("\n");

	//Para medir o tempo, inclua time.h, e siga o exemplo:
	clock_t start, end;//variáveis do tipo clock_t
    double total;

	start = clock();//start recebe o "ciclo" corrente
	
	end = clock();//end recebe o "ciclo" corrente
	//o tempo total é a diferença dividia pelos ciclos por segundo
	total = ((double)end - start)/CLOCKS_PER_SEC;
	printf("Tempo total: %f", total);
	printf("\n");

	//Início dos testes dos algoritmos de ordenação:
	printf("Insertion Sort\n\n");
	
	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor1[i]);
	}
	printf("\n");	
	
	numComp = insertionSort(vetor1, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");	
	
	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor1[i]);
	}
	printf("\n");	
	printf("\n");

	
	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor5[i]);
	}
	printf("\n");	
	
	numComp = insertionSort(vetor5, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");	
	
	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor5[i]);
	}
	printf("\n");	
	printf("\n");	



	printf("Selection Sort\n\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor2[i]);
	}
	printf("\n");	

	numComp = selectionSort(vetor2, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor2[i]);
	}
	printf("\n");	
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor6[i]);
	}
	printf("\n");	

	numComp = selectionSort(vetor2, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor6[i]);
	}
	printf("\n");	
	printf("\n");


	printf("Merge Sort\n\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor3[i]);
	}
	printf("\n");		
	
	numComp = mergeSort(vetor3, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor3[i]);
	}
	printf("\n");	
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor7[i]);
	}
	printf("\n");		
	
	numComp = mergeSort(vetor7, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor7[i]);
	}
	printf("\n");	
	printf("\n");



	printf("Quick Sort\n\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor4[i]);
	}
	printf("\n");	
	
	numComp = quickSort(vetor4, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor4[i]);
	}
	printf("\n");	
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor8[i]);
	}
	printf("\n");		
	
	numComp = mergeSort(vetor8, tamVetor);
	printf("comparacoes: %d", numComp);
	printf("\n");

	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor8[i]);
	}
	printf("\n");	
	printf("\n");



	for(int i=0; i < tamVetor; i++){
		printf("%d ", vetor2[i]);
	}
	printf("\n");
	
	idxBusca = buscaSequencial(vetor2, tamVetor, 3, &numComp);

	printf("\n%d %d", idxBusca, numComp);
	printf("\n");

	idxBusca = buscaSequencial(vetor2, tamVetor, 7, &numComp);

	printf("\n%d %d", idxBusca, numComp);
	printf("\n");

	idxBusca = buscaSequencial(vetor2, tamVetor, 68, &numComp);

	printf("\n%d %d", idxBusca, numComp);
	printf("\n");

	idxBusca = buscaBinaria(vetor2, tamVetor, 10, &numComp);

	printf("\n%d %d", idxBusca, numComp);
	printf("\n");


	//É obrigatório que você libere a memória alocada dinamicamente via free
	free(vetor1);
	free(vetor2);
	free(vetor3);
	free(vetor4);
	free(vetor5);
	free(vetor6);
	free(vetor7);
	free(vetor8);

	return 0;
}
