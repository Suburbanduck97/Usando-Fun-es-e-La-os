#include <stdio.h>
#include <locale.h>

int main(){
	int numero, opcao, i;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("ESCOLHA A OP��O: \n(1)SOMA \n(2)SUBTRA��O \n(3)MULTIPLICA��O \n(4)DIVIS�O \n\nINSIRA A OP��O: ");
	scanf("%d",&opcao);
	system("cls || clear");
	
	
	switch(opcao){
		case 1: puts("OP��O SELECIONADA: ADI��O \n"); 
		
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){
		printf("%d + %d = %d \n",numero, i, numero + i);
			
		}
		
		break;
		
		case 2:  puts("OP��O SELECIONADA: SUBTRA��O \n");
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){
		printf("%d - %d = %d \n",numero, i, numero - i);
		}
		
		break;
		
		case 3: puts("OP��O SELECIONADA: MULTIPLICA��O \n"); 
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){
		printf("%d x %d = %d \n",numero, i, numero * i);
	    }
	    
		break;
	
	    case 4: puts("OP��O SELECIONADA: DIVIS�O \n"); 
		printf("INSIRA UM NUMERO: ");
		scanf("%d",&numero);
		
		for(i=1;i<=10;i++){	
		printf("%d / %d = %d \n",numero, i, numero / i);
        }
        break;
        default: printf("\nINSIRA UMA OP��O V�LIDA!");
        break;
        
    }
}
