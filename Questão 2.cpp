#include <stdio.h>
#include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, multiplicacao, divisao, adicao, subtracao;
  	printf("Calculadora das quatro opera��es\n\n");
  	
  	printf("Digite o primeiro n�mero: ");
  	scanf("%f", &a);
  	
  	printf("Digite o segundo n�mero: ");
  	scanf("%f", &b);
  	
  	multiplicacao = a * b;
  	divisao = a / b;
  	adicao = a + b;
  	subtracao = a - b;
  	
  	printf("OS resultados s�o:\n\n Multiplica��o: %.1f\n Divis�o: %.2f\n Adi��o: %.1f\n Subtra��o: %.1f", multiplicacao, divisao, adicao, subtracao);
  	
  	return 0;
  }
