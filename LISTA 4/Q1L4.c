#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//A da quest�o 1
//cria��o da estrutura
typedef struct {
	float preco;
	char local[60];
	char atracao[100];
}Ingresso;
//fun��o para preencher
	void prenche(Ingresso* i){
    printf("informe o valor do ingresso: \n");
    scanf("%f",&i -> preco);
    printf("informe o local: \n");
	scanf("%s",&i -> local);
    printf("qual a atracao: \n");
	scanf("%s",&i -> atracao);
	}
//B da quest�o 1
//fun��o para impprimir
void imprime(Ingresso* i){
	printf("preco = %f\n", i -> preco);
	printf("local = %s\n", i -> local);
	printf("atracao = %s\n", i -> atracao);
}
//C da quest�o 1
//muda o pre�o
void altera_preco(Ingresso* i, float valor){
	i -> preco = valor;
}
//D da quest�o 1
//....
//apresenta as op��es ao usuario
 void nemo(){
 	printf("INFORME QUAL OPERA��O DESEJA REALIZAR: \n\n");
    printf("digite 1 para inserir os dados do engressos\n");
    printf("digite 2 para imprimir os dados do engressos\n");
    printf("digite 3 para alterar preco\n");
	printf("digite 4  para saber os eventos mais caros e baratos\n");
	
 }
//E da quest�o 1
int main()
//declara��o,chamada da fun��es,leituradas informa�oes
{
	Ingresso ingr;
    float numr;
	int opc;
	
	do {
	nemo();
	
	scanf("%d", &opc);
	switch(opc)
	{
	case 1:
		prenche(&ingr);
		
		break; 
	case 2:
		imprime(&ingr);
		break;
	case 3:
	
		printf("digite o preco que voce deseja alterar: ");
		scanf("%f", &numr);
		altera_preco(&ingr, numr);
		break;
	
	case 4:
		
		break;
	
	
	case 5:
		printf("exit");
		break;
	default:
		printf("operacao inesperada!\n");
		break;
	}
	}while(opc != 5);
	
	return 0;
}