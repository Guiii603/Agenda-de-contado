#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct contato { 
char nome[50]; 
char num[15]; 

}; 
void grava(void);


int main (void){
	int op;
	do{
	system("cls");
	printf("\n\t1 - Adicionar contato");
	printf("\n\t2 - consultar contato");
	printf("\n\t3 - excluir contato");
	printf("\n\t4 - sair");
	printf("\n\tDigite a opcao desejada: ");
	scanf("%i",&op);
	fflush(stdin);
	switch(op){
		case 1:
			grava();
			break;
		
		default:
			system("cls");
			printf("\n\topcao invalida!!!");
			getch();
			break;
	}
	}while(op!=4);
	
	
	return 0;
}

void grava (void){
	FILE *file;
	file = fopen ("C:\\Users\\guilherme.oechsler\\Desktop\\contatos.txt","a");
	struct contato p; 
printf("Digite o nome: "); 
scanf("%s", &p.nome); 
printf("Digite o numero: "); 
scanf("%s", &p.num); 
fprintf(file,"(%s - %s)\n",p.nome,p.num); 
fclose(file);
 
}
