#include <stdio.h>
#include <stdlib.h>
//Implemente uma função que preencha um vetor alocado dinamicamente de N
//elementos com valores inteiros fornecidos pelo o usuário, de modo que, à medida que um
//novo elemento é inserido, o vetor já permaneça organizado de maneira ordenada
//crescente. Escreva um programa que utiliza esta função, que deve obedecer ao seguinte
//protótipo: void preenche_ordenado(int n, int *v); 
void preenche_ordenado(int n, int *v){
	int i,r,auxiliar; //declaração das variaveis
	//percorre os elementos do vetor
	 for(i = 0; i < n;i++) {
		 for(r = 0; r < n; r++){
			 auxiliar = v[i]; // a variavel auxiliar recebe os elementos do vetor i
			 if(auxiliar > v[r]){ //se a variavel for maior que os elementos do vetor r
			 	v[i] = v[r]; // o vetor i recebe vetor r 
			 	v[r] = auxiliar; 	// vetor r recebe aulixiliar 
			 } // desta forma e possivel organizar o vetor de forma crescente
		 }
	 }	
	
}
int main(){
	int n,r,i;
	
	printf("qualtidade de elementos? \t"); // solicitação do tamanho do vetor
	scanf("%d",&n); //leitura 
		int *v; //declaração do vetor
	v = (int*)malloc(n*sizeof(int));
	for(i = 0;i < n; i++){ // preenche vetor i
	scanf("%d", &v[i]);
	}
	preenche_ordenado(n,v); // chamada da função
	
	for(r = n-1; r >= 0; r--){	//apresenta os elementos em ordem crescente
   	printf("%d\t", v[r]);    
    }
	
	return 0;
}