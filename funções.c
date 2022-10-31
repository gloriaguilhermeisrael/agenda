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
