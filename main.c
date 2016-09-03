//---------------------------------------------------------------------------------------------
//Programa exemplo da utiliza��o de ponteiros
//
//Laborat�rio de Algoritmo II
//
//�rico Ed� Corr�a, acad�mico do curso de Sistemas de Informa��o, da Faculdade Antonio Meneghetti
//Data: 02/09/2016
//---------------------------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>

int main()
{
//Cria��o e inicializa��o das variaveis
int Variavel_1 = 1, Variavel_2 = 2;
char Controle = 'n', Descarga; 

//Cria��o dos ponteiros
int *Ponteiro_1, *Ponteiro_2;

//enquanto 
while (1)
{
	//Inicializa��o dos ponteiros 
	Ponteiro_1 = &Variavel_1; //Ponteiro_1 recebe o endere�o de Variavel_1
	Ponteiro_2 = &Variavel_2; //Ponteiro_2 recebe o endere�o de Variavel_2
	
	//Exibe e solicita de controle
	printf("\n\nDESEJA FONALIZAR O PROGRAMA? (s/n)");
	//Efetua a leitura do comando
	scanf("%c", &Controle);
	// Se o camando indicar a finaliza��o, finalize o loop
	if(Controle == 's') break;
	
	//Exibe a solicita��o de um valor
	printf("\nDIGITE UM VALOR PARA Variavel_1: ");
	//Efetua a leitura do valor e transfere o valor para Variavel_1
	scanf("%i", Ponteiro_1);
	//Exibe a solicita��o de um valor
	printf("\nDIGITE UM VALOR PARA Variavel_2: ");
	//Efetua a leitura do valor e transfere o valor para Variavel_2
	//scanf("%i%c", Ponteiro_2, &Descarga);
	scanf("%i", Ponteiro_2);
}
//retorna 0
return 0;
}
