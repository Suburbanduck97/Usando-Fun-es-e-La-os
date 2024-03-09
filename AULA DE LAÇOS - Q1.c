#include <stdio.h>

void laco(float nota){
	do{
	  printf("INSIRA SUA NOTA: ");
	  scanf("%f",&nota);
	  system("cls || clear");
	
	puts("EXIBINDO RESULTADOS:\n\n");
	printf("NOTA INSERIDA: %1.f", nota);
	
	
	}while(nota < 0 || nota > 10);
}


int main(){
	float nota = 0.0;
	
	laco(nota);
	
}
