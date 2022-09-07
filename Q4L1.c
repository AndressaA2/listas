//Q1 -> X=3 Y=1 P=4
//Q2 -> A) erro B)falta o operador de endereço C)não foi bem sucedida D)0k E)agora sim
//Q3 ->30 20 10 

#include <stdio.h>
#include <math.h>

// criação da função
void calcula_hexagono(float l, float *area, float *perimetro){
// calculo da area 	
*area = (3 * pow(l,2) * sqrt(3)) / 2;
//calculo do perimetro
*perimetro = 6 * l;

} 

int main(){
 float l, area, perimetro;
// solicitação de valor para o usuario
 printf("informe o lado do hexagono: \n");
 scanf(" %f",&l);
 //chamada da função
  calcula_hexagono(l, &area, &perimetro);
  // apresentação dos valores obtidos
  printf("A = %f \n", area);
  printf("p = %f", perimetro);

return 0;
}