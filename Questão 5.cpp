#include <stdio.h>
#include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	int dinheiro, troco;
  	printf("Maquina de café\n\n");
  	
  	printf("Coloque o dinheiro: ");
  	scanf("%d", &dinheiro);
  	
  	if (dinheiro % 5 != 0){
  		printf("Valor inaválido.");
	  }
  	
  	return 0;
  }
