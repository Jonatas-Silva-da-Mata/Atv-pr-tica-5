# include <stdio.h>
# include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float a, r1;
  	printf("Converção para segundos\n\n");
  	
  	printf("Digite o número que você deseja converter para segundos: ");
  	scanf("%f", &a);
  	
  	r1 = a * 60;
  	
  	printf("O resultado é %.00f", r1);
  	
  	return 0;
  }
  
