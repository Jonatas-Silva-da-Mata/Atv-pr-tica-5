#include <stdio.h>
#include <locale.h>
  
  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, c, r1, r2, r3, r4;
  	printf("Digite os n�meros que deseja aplicar na f�rmula respectivamente:\n\n");
  	
  	printf("Digite o primeiro n�mero: ");
  	scanf("%f", &a);
  	
  	printf("Digite o segundo n�mero: ");
  	scanf("%f", &b);
  	
  	printf("Digite o terceiro n�mero: ");
  	scanf("%f", &c);
  	
  	r1 = (a * b)/c;
  	r2 = a * a + b + 5 * c;
  	r3 = a * b * c + b + c / 3 * 5 - 1;
  	r4 = ((a * b * c) * (a * b * c) * (a * b * c))/2;
  	
  	printf("Reultado na primeira f�rmula: %.1f\n Segunda: %.2f\n Terceira: %.2f\n Quarta: %.2f", r1, r2, r3, r4);
  	
  	return 0;
  }
