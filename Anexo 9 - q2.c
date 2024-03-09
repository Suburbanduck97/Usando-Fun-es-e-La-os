#include <stdio.h>
#include <locale.h>

int main(){
	int numero, opcao, i;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("ESCOLHA A OPÇÃO: \n(1)SOMA \n(2)SUBTRAÇÃO \n(3)MULTIPLICAÇÃO \n(4)DIVISÃO \n\nINSIRA A OPÇÃO: ");
	scanf("%d",&opcao);
	system("cls || clear");
	
	
	switch(opcao){
		case 1: puts("OPÇÃO SELECIONADA: ADIÇÃO \n"); 
		
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){
		printf("%d + %d = %d \n",numero, i, numero + i);
			
		}
		
		break;
		
		case 2:  puts("OPÇÃO SELECIONADA: SUBTRAÇÃO \n");
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){
		printf("%d - %d = %d \n",numero, i, numero - i);
		}
		
		break;
		
		case 3: puts("OPÇÃO SELECIONADA: MULTIPLICAÇÃO \n"); 
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){
		printf("%d x %d = %d \n",numero, i, numero * i);
	    }
	    
		break;
	
	    case 4: puts("OPÇÃO SELECIONADA: DIVISÃO \n"); 
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){	
		printf("%d / %d = %d \n",numero, i, numero / i);
        }
        break;
        default: printf("\nINSIRA UMA OPÇÃO VÁLIDA!");
        break;
        
    }
	return 0;
}
