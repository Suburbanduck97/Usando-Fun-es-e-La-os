#include <stdio.h>
#include <locale.h>

int main(){
	float nota, soma = 0, media;
	int i, contador = 0;
	char resposta, respostaInserida; 
	setlocale(LC_ALL, "portuguese");
	
	do{ //La�o de Repeti��o "DO-WHILE"
		printf("DESEJA INSERIR UMA NOTA? (S) PARA SIM OU (N) PARA N�O \nRESPOSTA: ");
		fflush(stdin);
		scanf("%c",&resposta);
		
		resposta = toupper(resposta); //Converte letras min�sculas p/ letras mai�sculas.
		
		system("cls || clear");
		
		//Sistema Condicional
		if(resposta != 'N'){
		printf("INSIRA A %d� NOTA: ", contador + 1);
		scanf("%f",&nota);
		system("cls || clear");
		
		//C�lculos a Serem Executados Pelo Sistema, Dentro da fun��o "Do-While".
		soma = soma + nota;
		contador = contador + 1;  //contador foi utilizado para demarcar as quantidades de intera��es com o programa; 
		media = soma / contador;
		
		}
		
	}while(resposta != 'N'); //fun��o de reopeti��o while
	
	//Exibindo dados, Fora dos Sistemas "Do-While".
	puts("=== EXIBINDO M�DIA ===");
	printf("M�DIA : %.1f \n", media);
	printf("\n\nQUANTIDADE DE NOTAS INSERIDAS: %d", contador); //Exibira a quantidades de intera��es.
	
	return 0;
}
