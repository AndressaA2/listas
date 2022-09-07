#include <stdio.h>
#include <stdlib.h>
// função tipo char
char situacao(float p1, float p2, float p3, 
int faltas, int aulas, float *media, float R){
 R = (faltas * 100)/aulas; // porcentagem de faltas
 *media = (p1 + p2 + p3) / 3;// calcula media
 //checagem da situação do aluno e retorno
if(R <= 25){
	if(*media > 6.0){
	return 'A';	
	
	}
	else{
	return 'R';		
	}
}
if(R > 25){
return 'F';	
}

}

int main(void) {
	//decleração das variaveis
 int aulas, faltas;
 float p1,p2,p3,media,R = 0;
 char recb;
 //leitura das notas
 printf("informe as notas: \n");
 scanf(" %f %f %f",&p1,&p2,&p3);
//leitura da quantidade de aula e faltas
 printf("informe a quantidade de dias de aula: \n");
 scanf(" %d",&aulas);
 printf("informe a quantidade de faltas: \n");
 scanf(" %d",&faltas);
 //passa a função para variavel e faz sua chamada e passa parametros
 recb = situacao(p1,p2,p3,faltas,aulas,&media,R);
 //checa o retorno e exibe a situação do aluno
 switch(recb){
 case 'A':
    printf("MEDIA:%.1f \t situacao: A", media);
	printf("\nPARABENS VOCE FOI APROVADO");
	break;
 

  case 'R':
	 printf("MEDIA:%.1f \t situacao: R", media);
		printf("\n VOCE FOI REPROVADO POR MEDIA");	
     break;
 case 'F':
	 printf("MEDIA:%.1f \t situacao: F", media);
		printf("\n VOCE FOI REPROVADO POR FALTA");	
   break;
 }
 return 0;
}
