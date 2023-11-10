#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
	Atividade Prática - Métodos de ordenação simples - AEDS II 
	Aluno: Pedro Sousa
*/


void bubbleSort(int vet[], int tam){
	
	int i, j, aux;
	
	for(i = 0; i < tam; i++){
		
		for(j = 1; j < i; j++){
			
			if(vet[j] < vet[j-1]){
				aux = vet[j-1];
				vet[j-1] = vet[j];
				vet[j] = aux;
			}
		}
	}
}

void selectionSort(int vet[], int tam){
	
	int i, j, aux, menor;
	
	for(i = 0; i < tam; i++){
		
		menor = i;
		for(j = i+1; j < tam; j++){
			
			if(vet[j] < menor){
				menor = j;
			}
		}
		
		aux = vet[i];
		vet[i] = vet[menor];
		vet[menor] = vet[i];
		
	}
}

void insertionSort(int vet[], int tam){
	
	int i, j, aux;
	
	for(i = 1; i < tam; i++){
		
		aux = vet[i];
		j = i-1;
		
		while(aux < vet[j] && j >= 0){
			
			vet[j+1] = vet[j];
			j--;	
		}
		vet[j+1] = aux;
	}	
}

void imprimeVetor(int vet[], int tam){
	
	int i, ultimo;
	printf("[");
	ultimo = tam -1;
	
	for(i = 0; i < tam; i++){
		
		if(i == ultimo){
			printf("%i]", vet[i]);	
		}else{
			printf("%i, ", vet[i]);	
		}
	}
	printf("\n");
	
}


int main(){
	
	int tam = 9;
	
	printf("\n-----------------------------------------------");
	printf("\n------------------BUBBLE SORT------------------\n");
	printf("ANTES: \n");
	int vetorTesteBubble[] = {11, 8, 6, 15, 2, 9, 23, 1, 4};
	imprimeVetor(vetorTesteBubble, tam);
	printf("DEPOIS: \n");
	bubbleSort(vetorTesteBubble, tam);
	imprimeVetor(vetorTesteBubble, tam);
	
	printf("\n-----------------------------------------------");
	printf("\n----------------SELECTION SORT-----------------\n");
	printf("ANTES: \n");
	int vetorTesteSelection[] = {11, 8, 6, 15, 2, 9, 23, 1, 4};
	imprimeVetor(vetorTesteSelection, tam);
	printf("DEPOIS: \n");
	selectionSort(vetorTesteBubble, tam);
	imprimeVetor(vetorTesteBubble, tam);
	
	printf("\n-----------------------------------------------");
	printf("\n----------------INSERTION SORT-----------------\n");
	printf("ANTES: \n");
	int vetorTesteInsertion[] = {11, 8, 6, 15, 2, 9, 23, 1, 4};
	imprimeVetor(vetorTesteInsertion, tam);
	printf("DEPOIS: \n");
	insertionSort(vetorTesteInsertion, tam);
	imprimeVetor(vetorTesteInsertion, tam);
	
	printf("\n-----------------------------------------------");
	printf("\n-----------------------------------------------\n\n");
	return 0;
}

