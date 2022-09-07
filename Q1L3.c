#include <stdio.h>
#include <stdlib.h>
//A

//implementação da função com vetor simples
int* soma(int* A, int* B, int m, int n){
//declarações
	int L, C;
	int* Matz;
//alocação da matriz	
	Matz = (int*)malloc(m*n*sizeof(int));
	//alocação da matriz
	for(L = 0;L < n;L++){
		for(C = 0;C < m; C++){
			//somando
		Matz[L*m+C]	= A[L*m+C] + B[L*m+C];
		}
	}
	return Matz;
}
//implementação da função com vetor de ponteiros
int** soma_(int** A, int** B, int m, int n){
	//declarações
    int L, C;
	int** Matz;
	//alocação da matriz
	Matz = (int**)malloc(n*sizeof(int*));
	//alocação da matriz
	for(L = 0;L < n;L++){
		Matz[L] = (int*)malloc(n*sizeof(int));
       for(L = 0;L < n;L++){
		for(C = 0;C < m; C++){
        //somando
		Matz[L][C] = A[L][C] + B[L][C];
		}
	}
}
return Matz;
}
// B

//implementação da função com vetor simples
int* subtrai(int* A, int* B, int m, int n){
//declarações
	int g, d;
	int* Mat;
//alocação da matriz	
	Mat = (int*)malloc(m*n*sizeof(int));
	//alocação da matriz
	for(g = 0;g < n;g++){
		for(d = 0;d < m; d++){
			//subtração
		Mat[g*m-d]	= A[g*m-d] - B[g*m-d];
		}
	}
	return Mat;
}
//implementação da função com vetor de ponteiros
int** subtrai_(int** A, int** B, int m, int n){
	//declarações
    int g, d;
	int** Mat;
	//alocação da matriz
	Mat = (int**)malloc(n*sizeof(int*));
	//alocação da matriz
	for(g = 0;g < n;g++){
		Mat[g] = (int*)malloc(n*sizeof(int));
       for(g = 0;g < n;g++){
		for(d = 0;d < m; d++){
        //subtração
		Mat[g][d] = A[g][d] - B[g][d];
		}
	}
}
return Mat;
}

