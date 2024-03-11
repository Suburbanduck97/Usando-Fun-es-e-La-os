#include <stdio.h>
#include <locale.h>

int main(){
	float nota, soma = 0, media;
	int i, contador = 0;
	char resposta, respostaInserida; 
	setlocale(LC_ALL, "portuguese");
	
	do{ //Laço de Repetição "DO-WHILE"
		printf("DESEJA INSERIR UMA NOTA? (S) PARA SIM OU (N) PARA NÃO \nRESPOSTA: ");
		fflush(stdin);
		scanf("%c",&resposta);
		
		resposta = toupper(resposta); //Converte letras minúsculas p/ letras maiúsculas.
		
		system("cls || clear");
		
		//Sistema Condicional
		if(resposta != 'N'){
		printf("INSIRA A %dª NOTA: ", contador + 1);
		scanf("%f",&nota);
		system("cls || clear");
		
		//Cálculos a Serem Executados Pelo Sistema, Dentro da função "Do-While".
		soma = soma + nota;
		contador = contador + 1;  //contador foi utilizado para demarcar as quantidades de interações com o programa; 
		media = soma / contador;
		
		}
		
	}while(resposta != 'N'); //função de reopetição while
	
	//Exibindo dados, Fora dos Sistemas "Do-While".
	puts("=== EXIBINDO MÉDIA ===");
	printf("MÉDIA : %.1f \n", media);
	printf("\n\nQUANTIDADE DE NOTAS INSERIDAS: %d", contador); //Exibira a quantidades de interações.
	
	return 0;
}
