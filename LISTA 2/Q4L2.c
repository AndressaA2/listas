#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 int n,i;//declara��o das variaveis
 printf("informe o tamanho do vetor: \t");	//solicita��o dos valores aleatorios
 scanf("%d", &n);
//estrutura de repeti��o caso o valor seja menor que 10
     while(n < 9){
        printf("VALOR MUITO BAIXO POR FAVOR INFORME UM VALOR IGUAL OU MAIOR QUE 10 \n");
        printf("informe o tamanho do vetor: \t");	
        scanf("%d", &n);
        
 } 
   	
	double *v = (double*)malloc(n*sizeof(double)); // declara��o do vetor
	srand(time(NULL));//inicia o gerador de numero
	//percore as 10 primeiras posi��o do vetor atribuindo valores aleatorios
	for(i = 0; i <10; i++){
		printf("%d ->%d\n", i,  rand() % 100);
	}
    
return 0;	
}