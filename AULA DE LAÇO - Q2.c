#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void laco(float nota,float media, int i){
	for(i=1;i<=2;i++){
		do{
		printf("INSIRA A %dª NOTA: ", i);
		scanf("%f",&nota);
		
		media = (nota + nota) / 2;
		system("cls || clear");
		
		puts("EXIBINDO MÉDIA: \n\n");
		printf("MÉDIA DAS NOTAS: ", media);
	
	}while(nota < 0 || nota > 10);
		
	}
	media = (nota + nota) / 2;
	system("cls || clear");
	if(nota < 0 || nota > 10){
		printf("\n\nINSIRA UMA NOTA VÁLIDA");
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
	float nota = 0.0, media =  0;
	int i; 
	
	laco(nota, media, i);
	
}
