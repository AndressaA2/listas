#include <stdio.h>
#include <stdlib.h>

int main(){
	//declara variaveis
	int i, menor, maior = 0, n, soma = 0;
	// solicitação do tamanho do vetor
	printf("Digite a quantidade de numeros que deseja inserir: \n"); 
	scanf("%d ", &n);
    //declaraçaõ do vetor
	int *vt = (int*) malloc(n* sizeof(int));
	//prenchendo o vetor
    for(i = 0; i < n; i++){
		scanf("%d",&vt[i]);
		
	}	
	maior = vt[0]; //passando o primeiro valor inserido para a variavel
	menor = vt[0]; //passando o primeiro valor inserido para a variavel
	
 // percore os termos 
		for(i = 0; i < n; i++){
  //conferindo se os valores inseridos em seguida e menor do que o do primeiro termo do vetor
	if(menor > vt[i]){ 
		menor = vt[i]; 
	}
	//conferindo se os valores inseridos em seguida e maior do que o do primeiro termo do vetor
	if(maior < vt[i]){ 
		maior = vt[i];
	}
		}
 // imprime os termos do vetor
 printf("\n");
	for(i = 0; i < n; i++){	
		printf("%d ", vt[i]);
	}
	//soma o maior e menor termo
	soma = maior + menor;
	//apresenta os resultados
	printf("\n menor = %d \n", menor);
	printf("maior = %d \n", maior);
	printf("soma do menor e maior = %d \n", soma);
	 //libera a memoria alocada dinamicamente
	free(vt);
	return 0;
}