# include <stdio.h>
# include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float a, r1;
  	printf("Conver��o para segundos\n\n");
  	
  	printf("Digite o n�mero que voc� deseja converter para segundos: ");
  	scanf("%f", &a);
  	
  	r1 = a * 60;
  	
  	printf("O resultado � %.00f", r1);
  	
  	return 0;
  }
  
