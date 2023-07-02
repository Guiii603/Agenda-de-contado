#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>


struct contato { 
char nome[50]; 
char num[15]; 

}; 
void grava(void);
void pesquisar (void);

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
			
		case 2:
			pesquisar();
			break;
			
		case 4:
			system("cls");
			printf("Saindo...");
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
	system("cls");
	FILE *file;
	file = fopen ("C:\\Users\\Pichau\\OneDrive\\Área de Trabalho\\Programas\\contatos.txt","a");
	struct contato p; 
printf("Digite o nome: "); 
gets(p.nome); 
printf("Digite o numero: "); 
gets(p.num); 
fprintf(file,"%s     %s\n",p.nome,p.num); 
fclose(file);
}

void pesquisar (void){
	system("cls");
	struct contato p; 
	FILE *file;
	file = fopen("C:\\Users\\Pichau\\OneDrive\\Área de Trabalho\\Programas\\contatos.txt", "r");
	
	char pesquisaNome[50];
    printf("Digite o nome para pesquisar: ");
    gets(pesquisaNome);
    fflush(stdin);
    
    while (fscanf(file, "%s %s\n", p.nome, p.num) != EOF) {
        if (strcmp(pesquisaNome, p.nome) == 0) {
            printf("\nContato encontrado:");
            printf("%s    %s", p.nome, p.num);
            getch();
            fclose(file);
            return;
        }
    } 
	fclose(file);
}
