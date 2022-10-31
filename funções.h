#ifndef funcoes 
#define funcoes

char primeiroNome(char nome);
int mesAniversario(int mes);
void adicionarPessoa();
int retirarPessoa();
void telaInicial();

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
#endif
