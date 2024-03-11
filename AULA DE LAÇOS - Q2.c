#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float nota = 0.0 , media = 0.0, soma = 0.0;
	int i;
	
	//Iniciando laço
	for(i=1;i<=2;i++){  //Comando "for" da forma: for(<int.>; <cond.>; <variavel de controle.>{ <bloco_de_comandos>}.
		
		//Comando "do-while" da forma: do{ <bloco_de_comandos> } while(<condição>);
		do{
			printf("INSIRA A %dª NOTA: ", i);
			scanf("%f",&nota);
			fflush(stdin);
			
			soma = soma + nota;
			media = (nota + nota) / 2;
		
		}while(nota < 0 || nota > 10 );
	}
	
	
	system("cls || clear");
	
	//Exibindo dados:
	puts("=== EXIBINDO NOTAS E RESULTADO ===");
	printf("\nSUA 1ª NOTA: %.1f",nota);
	printf("\nSUA 2ª NOTA: %.1f",nota);
	printf("\n\nSUA MÉDIA: %.1f",media);
	
	return 0;
}
