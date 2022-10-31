#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include "funções.h"
//glguis22.2
typedef struct{
	char nome[30];
	char email[50];
	struct{
		char rua[20];
		int numero;
		char complemento[30];
		char bairro;
		char cep[10];
		char cidade[15];
		char estado[20];
		char pais[12];
	}endereco;
	struct{
		int ddd;
		int telefone;	
	}telefone;
	struct{
		int dia;
		int mes;
		int ano;
	}data;
}dados;

PrimeiroNome(char nome){
	
}
mesAniversario(int mes){
	
}
adicionarPessoa(){
	int i,j;
	dados agenda[100];
	system("cls");
	printf("Quantas pessoas inserir?\n");
	scanf("%d",&j);

	for(i=0;i<=j;i++){
		printf("Nome");

	}
}
retirarPessoa(){
	system("cls");
	printf("Remover contato:\n");
}
telaInicial(){
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
main(){
	setlocale(LC_ALL,"");
	telaInicial();

	
	
}
