#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct LIVRO
{
	char AUTORES[100];
	char OBRA[100];
	char EDITORA[100];
	int  CODIGO;	
};

int main()
{
	
	/*CARACTERES DE PORTUGUES*/
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
	/*DECLARACAO DE VARIAVEIS*/
	
	
	int OPERACAO, I, CONTADOR, FIM;

	
	/*COLETA DE DADOS E PROCESSAMENTO*/
	
	FIM=1;
	I=0;
	
	struct LIVRO FICHA[5];
	
	do
	
	{
	
	
	system("cls");
	
	printf("\nSISTEMA BIBLIOTECÁRIO DE CADASTRO\n");
	
	printf("\n 1 - CADASTRAR NOVO LIVRO \n");
	
	printf("\n 2 - LISTAR LIVROS CADASTRADOS \n");
	
	printf("\n 0 - ENCERRAR PROGRAMA \n");
	
	scanf("%d", &OPERACAO);
	
	
	
	fflush(stdin);
	
	
	
	if (OPERACAO == 1)
	{
		system("cls");
		
		if(I==5)
		{
			printf("\nSISTEMA DE CADASTRO LOTADO.NÃO É POSSÍVEL ARMAZENAR MAIS INFORMAÇÕES!\n");
		}
		
		else{
		
		I=I+1;
		
		printf("\nSISTEMA BIBLIOTECÁRIO DE CADASTRO\n");
		
		printf("\n NOME DA OBRA: \n\n");
		
		scanf("%100[^\n]s", &FICHA[I].OBRA);
		
		fflush(stdin);
		
		printf("\n AUTORES DA OBRA: \n\n");
		
		scanf("%100[^\n]s", &FICHA[I].AUTORES);
		
		fflush(stdin);
		
		printf("\n EDITORA: \n\n");
		
		
		scanf("%100[^\n]s", &FICHA[I].EDITORA);
		
		fflush(stdin);
		
		FICHA[I].CODIGO=100+I;
			}
		
	}
	
	
	if (OPERACAO == 2)
	{
		system("cls");
		
		if(I==0)
		{
			printf("\nLISTA VAZIA!!!\n");
		}
		
		else{
			
			if(I!=0 && I<6)
			
		{
		
		for(CONTADOR=1;CONTADOR<(I+1);CONTADOR++)
		
		{
			printf("\nCODIGO: %d\n",FICHA[CONTADOR].CODIGO);
			printf("OBRA: %s\n",FICHA[CONTADOR].OBRA);
			printf("AUTORES: %s\n",FICHA[CONTADOR].AUTORES);
			printf("EDITORA: %s\n",FICHA[CONTADOR].EDITORA);
			printf("\n----------------------\n");
		}
		}
	
			}
	}
	
	if (OPERACAO != 1 && OPERACAO !=2 && OPERACAO !=0)
	
	{
		system("cls");
		printf("\nOPERACAO INVALIDA!!!\n");
	}
	
	printf("\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n\nPRESSIONE 0 PARA ENCERRAR\n");
	
	scanf("%d", &FIM);
	
	fflush(stdin);
}

while (FIM !=0);

system("cls");

return(0);
		
}
