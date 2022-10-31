#include "funcoes.h"
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
char primeiroNome(char nome){
	
}
int mesAniversario(int mes){
	
}
void adicionarPessoa(){
	int i,j;
	dados agenda[100];
	system("cls");
	printf("Quantas pessoas inserir?\n");
	scanf("%d",&j);

	for(i=0;i<=j;i++){
		printf("Nome");

	}
}
int retirarPessoa(){
	system("cls");
	printf("Remover contato:\n");
}
void telaInicial(){
	int resp;
	
	printf("Agenda\n\n");
	printf("1 - Adicionar contato\n2 - Remover contato\n");
	scanf("%d",&resp);
	
	if(resp == 1){
		adicionarPessoa();
	}
	else if(resp==2){
		retirarPessoa();
	}
}
