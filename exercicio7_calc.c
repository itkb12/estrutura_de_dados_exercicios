#include<stdio.h>

//Exercicio - Parte II
/*
5.Desenvolva um algoritmo em que no bloco principal MAIN, demonstre através 
de chamadas e funções, as mensagens em tela referente à cada 
operação matemática que o usuário escolher (adição, subtração etc). 
Ou seja, serão 4 funções.:
*/
void adicao(int x,int y){ //função que fará a adição dos números informados
	printf("(%d) + (%d) = %d",x,y,x+y);
}

void sub(int x,int y){ //função que fará a subtração dos números informados
	printf("(%d) - (%d) = %d",x,y,x-y);
}
 
void multi(int x,int y){ //função que fará a multiplicação dos números informados
	printf("(%d) * (%d) = %d",x,y,x*y);
}

void div(int x,int y){ //função que fará a divisão (inteira) dos números informados
	printf("(%d) / (%d) = %d",x,y,x/y);
}


void main(){
	int escolha,a,b; //as variáveis criadas são para o usuário escolher os números que quer calcular
					 //e escolher uma das opções no menu
	printf("\nBem Vindo!");
	printf("\n\nInforme valor para a e b: ");
	scanf("%d %d",&a,&b);
	printf("\n\nEscolha o que deseja fazer (insira um numero): "); //depois de informado os valores
																   //o usuário escolherá qual das opções abaixo irá realizar
	printf("\n1: (%d) + (%d) = ? ",a,b);
	printf("\n2: (%d) - (%d) = ? ",a,b);
	printf("\n3: (%d) * (%d) = ? ",a,b);
	printf("\n4: (%d) / (%d) = ? ",a,b);
	printf("\nSua escolha: ");
	scanf("%d",&escolha);
	if(escolha == 1) //se a escolha for 1, será mostrado a adição dos números
		adicao(a,b);
	else if(escolha == 2) //se a escolha for 2, será mostrado a subtração dos números
		sub(a,b);
	else if(escolha == 3) //se a escolha for 3, será mostrado a multiplição dos números
		multi(a,b);
	else if(escolha == 4) //se a escolha for 4, será mostrado a divisão dos números
		div(a,b);
	else //caso não seja nenhuma das escolhas, irá informar que o valor é inválido
		printf("Valor invalido");
}
