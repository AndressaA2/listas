#include <stdio.h>
#include <stdlib.h> 


int main(){
	float qt, media, soma = 0; // declara��o das variaveis
	int i; 
	
    printf("informe a quantidade de alunos: \n"); //solicita��o da quantidade de alunos
	scanf("%f ", &qt); // leitura da quantidade
	
    float *vnt = (float*) malloc(qt* sizeof(float)); // declara��o do vetor
	// prenchendo o vetor
	for(i = 0;i < qt;i++){
		scanf("%f ", &vnt[i]);
		soma += vnt[i]; //fazendo a soma dos valores inseridos
	}
	media = soma / qt;//cauculo da media
	//apresenta��o do vetor
	for(i = 0;i < qt;i++){
	 printf(" %f", vnt[i]);
	 	
	}
	//apresenta��o da media
    printf("\n a media das notas e = %.2f \n", media);
	
	free(vnt);
	return 0;
}