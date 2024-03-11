#include <stdio.h>
#include <locale.h>

//Função "void" para sistema condicional
void resultadosNotas(float medias){
	if(medias >= 7){
		printf("\n\nVOCÊ ESTÁ APROVADO!");
	}else if(medias >= 5 && medias <= 6.9){
		printf("\n\nVOCÊ ESTÁ EM RECUPERAÇÃO!");
	}else{
		printf("\n\nVOCÊ ESTÁ REPROVADO!");
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	float nota = 0.0 , media = 0.0 , soma = 0.0;
	int i;
	
	//Iniciando laço
	for(i=1;i<=3;i++){  //Comando "for" da forma: for(<int.>; <cond.>; <variavel de controle.>{ <bloco_de_comandos>}.
		
		//Comando "do-while" da forma: do{ <bloco_de_comandos> } while(<condição>);
		do{
			printf("INSIRA A %dª NOTA: ", i);
			scanf("%f",&nota);
			fflush(stdin);
			
			
			soma = soma + nota;
			media = soma / 3;
		
		}while(nota < 0 || nota > 10 );
	}
	
	
	system("cls || clear");
	
	//Exibindo dados:
	puts("=== EXIBINDO NOTAS E RESULTADO ===");
	printf("\nSUA MÉDIA: %.1f",media);
	
	//Interligando a função dentro do "int main()".
	resultadosNotas(media);
	
	return 0;
}
