#include <stdio.h>
#include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, multiplicacao, divisao, adicao, subtracao;
  	printf("Calculadora das quatro operações\n\n");
  	
  	printf("Digite o primeiro número: ");
  	scanf("%f", &a);
  	
  	printf("Digite o segundo número: ");
  	scanf("%f", &b);
  	
  	multiplicacao = a * b;
  	divisao = a / b;
  	adicao = a + b;
  	subtracao = a - b;
  	
  	printf("OS resultados são:\n\n Multiplicação: %.1f\n Divisão: %.2f\n Adição: %.1f\n Subtração: %.1f", multiplicacao, divisao, adicao, subtracao);
  	
  	return 0;
  }
