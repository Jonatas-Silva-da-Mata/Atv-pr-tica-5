#include <stdio.h>
#include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float massa, altura, IMC;
  	printf("Descubra seu IMC atribuindo algumas informa��es abaixo\n\n");
  	
  	printf("Digite sua massa corporal: ");
  	scanf("%f", &massa);
  	
  	printf("Digite sua altura corporal: ");
  	scanf("%f", &altura);
  	
  	IMC = massa / (altura * altura);
  	
  	printf("O seu IMC � %.2f", IMC);
  	
  	return 0;
  }
