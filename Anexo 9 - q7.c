#include <stdio.h>
#include <locale.h>

void cabecalho(){
	puts("=== MENU CALCULADORA DE NOTAS === \n\n");
}void exibindo(){
	puts("EXIBINDO RESULTADO:\n");
}

float mediaNotas(float Nota){
	float media = (Nota + Nota) / 2; 
	return media;
}

int main(){
	float  nota = 0.0, media = 0.0;
	int i;
	setlocale(LC_ALL, "portuguese");
	
	cabecalho();
	for(i=1; i<=2; i++){
		do{
		
			printf("INSIRA A NOTA DA %d� AVALIA��O : ", i);
			scanf("%f",&nota);
			fflush(stdin);
			
			media = mediaNotas(nota);
		
		}while(nota < 0 || nota > 10);
		
	}
	
	system("cls || clear");
	
	cabecalho();
	exibindo();	
	printf("SUA PRIMEIRA NOTA � : %.1f", nota);
	printf("\nSUA SEGUNDA NOTA � : %.1f", nota);
	printf("\n\nM�DIA DAS NOTAS �: %.1f", media);
	
	if(media >= 7){
		puts("\n\nVOC� ESTA APROVADO!");
	}else{ puts("\n\nVOC� EST� REPROVADO!");
	}
	
	
}
