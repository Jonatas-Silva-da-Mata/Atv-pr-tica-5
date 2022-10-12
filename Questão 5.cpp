#include <stdio.h>
#include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float dinheiro, quantidade, valor, troco;
  	printf("Maquina de café\n\n");
  	
  	printf("Informe o valor da sua nota: ");
  	scanf("%f", &dinheiro);
  	
  	valor = dinheiro / 5;
  	troco = valor % dinheiro;
  	
  	printf("O total do seu café deu %.00f\n Troco perdido: %.00f", valor, troco);
  	
  	return 0;
  }
