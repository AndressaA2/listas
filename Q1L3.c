#include <stdio.h>
#include <stdlib.h>
//A

//implementa��o da fun��o com vetor simples
int* soma(int* A, int* B, int m, int n){
//declara��es
	int L, C;
	int* Matz;
//aloca��o da matriz	
	Matz = (int*)malloc(m*n*sizeof(int));
	//aloca��o da matriz
	for(L = 0;L < n;L++){
		for(C = 0;C < m; C++){
			//somando
		Matz[L*m+C]	= A[L*m+C] + B[L*m+C];
		}
	}
	return Matz;
}
//implementa��o da fun��o com vetor de ponteiros
int** soma_(int** A, int** B, int m, int n){
	//declara��es
    int L, C;
	int** Matz;
	//aloca��o da matriz
	Matz = (int**)malloc(n*sizeof(int*));
	//aloca��o da matriz
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

//implementa��o da fun��o com vetor simples
int* subtrai(int* A, int* B, int m, int n){
//declara��es
	int g, d;
	int* Mat;
//aloca��o da matriz	
	Mat = (int*)malloc(m*n*sizeof(int));
	//aloca��o da matriz
	for(g = 0;g < n;g++){
		for(d = 0;d < m; d++){
			//subtra��o
		Mat[g*m-d]	= A[g*m-d] - B[g*m-d];
		}
	}
	return Mat;
}
//implementa��o da fun��o com vetor de ponteiros
int** subtrai_(int** A, int** B, int m, int n){
	//declara��es
    int g, d;
	int** Mat;
	//aloca��o da matriz
	Mat = (int**)malloc(n*sizeof(int*));
	//aloca��o da matriz
	for(g = 0;g < n;g++){
		Mat[g] = (int*)malloc(n*sizeof(int));
       for(g = 0;g < n;g++){
		for(d = 0;d < m; d++){
        //subtra��o
		Mat[g][d] = A[g][d] - B[g][d];
		}
	}
}
return Mat;
}

