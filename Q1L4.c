#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//A da questão 1
//criação da estrutura
typedef struct {
	float preco;
	char local[60];
	char atracao[100];
}Ingresso;
//função para preencher
	void prenche(Ingresso* i){
    printf("informe o valor do ingresso: \n");
    scanf("%f",&i -> preco);
    printf("informe o local: \n");
	scanf("%s",&i -> local);
    printf("qual a atracao: \n");
	scanf("%s",&i -> atracao);
	}
//B da questão 1
//função para impprimir
void imprime(Ingresso* i){
	printf("preco = %f\n", i -> preco);
	printf("local = %s\n", i -> local);
	printf("atracao = %s\n", i -> atracao);
}
//C da questão 1
//muda o preço
void altera_preco(Ingresso* i, float valor){
	i -> preco = valor;
}
//D da questão 1
//....
//apresenta as opções ao usuario
 void nemo(){
 	printf("INFORME QUAL OPERAÇÃO DESEJA REALIZAR: \n\n");
    printf("digite 1 para inserir os dados do engressos\n");
    printf("digite 2 para imprimir os dados do engressos\n");
    printf("digite 3 para alterar preco\n");
	printf("digite 4  para saber os eventos mais caros e baratos\n");
	
 }
//E da questão 1
int main()
//declaração,chamada da funções,leituradas informaçoes
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