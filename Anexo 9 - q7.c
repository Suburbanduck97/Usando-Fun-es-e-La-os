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
		
			printf("INSIRA A NOTA DA %dª AVALIAÇÃO : ", i);
			scanf("%f",&nota);
			fflush(stdin);
			
			media = mediaNotas(nota);
		
		}while(nota < 0 || nota > 10);
		
	}
	
	system("cls || clear");
	
	cabecalho();
	exibindo();	
	printf("SUA PRIMEIRA NOTA É : %.1f", nota);
	printf("\nSUA SEGUNDA NOTA É : %.1f", nota);
	printf("\n\nMÉDIA DAS NOTAS É: %.1f", media);
	
	if(media >= 7){
		puts("\n\nVOCÊ ESTA APROVADO!");
	}else{ puts("\n\nVOCÊ ESTÁ REPROVADO!");
	}
	
	return 0;
}
