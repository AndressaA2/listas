#include <stdio.h>
#include <stdlib.h> 


int main(){
	float qt, media, soma = 0; // declaração das variaveis
	int i; 
	
    printf("informe a quantidade de alunos: \n"); //solicitação da quantidade de alunos
	scanf("%f ", &qt); // leitura da quantidade
	
    float *vnt = (float*) malloc(qt* sizeof(float)); // declaração do vetor
	// prenchendo o vetor
	for(i = 0;i < qt;i++){
		scanf("%f ", &vnt[i]);
		soma += vnt[i]; //fazendo a soma dos valores inseridos
	}
	media = soma / qt;//cauculo da media
	//apresentação do vetor
	for(i = 0;i < qt;i++){
	 printf(" %f", vnt[i]);
	 	
	}
	//apresentação da media
    printf("\n a media das notas e = %.2f \n", media);
	
	free(vnt);
	return 0;
}