#include<stdio.h>

//Exercicio - Parte II
/*
5.Desenvolva um algoritmo em que no bloco principal MAIN, demonstre atrav�s 
de chamadas e fun��es, as mensagens em tela referente � cada 
opera��o matem�tica que o usu�rio escolher (adi��o, subtra��o etc). 
Ou seja, ser�o 4 fun��es.:
*/
void adicao(int x,int y){ //fun��o que far� a adi��o dos n�meros informados
	printf("(%d) + (%d) = %d",x,y,x+y);
}

void sub(int x,int y){ //fun��o que far� a subtra��o dos n�meros informados
	printf("(%d) - (%d) = %d",x,y,x-y);
}
 
void multi(int x,int y){ //fun��o que far� a multiplica��o dos n�meros informados
	printf("(%d) * (%d) = %d",x,y,x*y);
}

void div(int x,int y){ //fun��o que far� a divis�o (inteira) dos n�meros informados
	printf("(%d) / (%d) = %d",x,y,x/y);
}


void main(){
	int escolha,a,b; //as vari�veis criadas s�o para o usu�rio escolher os n�meros que quer calcular
					 //e escolher uma das op��es no menu
	printf("\nBem Vindo!");
	printf("\n\nInforme valor para a e b: ");
	scanf("%d %d",&a,&b);
	printf("\n\nEscolha o que deseja fazer (insira um numero): "); //depois de informado os valores
																   //o usu�rio escolher� qual das op��es abaixo ir� realizar
	printf("\n1: (%d) + (%d) = ? ",a,b);
	printf("\n2: (%d) - (%d) = ? ",a,b);
	printf("\n3: (%d) * (%d) = ? ",a,b);
	printf("\n4: (%d) / (%d) = ? ",a,b);
	printf("\nSua escolha: ");
	scanf("%d",&escolha);
	if(escolha == 1) //se a escolha for 1, ser� mostrado a adi��o dos n�meros
		adicao(a,b);
	else if(escolha == 2) //se a escolha for 2, ser� mostrado a subtra��o dos n�meros
		sub(a,b);
	else if(escolha == 3) //se a escolha for 3, ser� mostrado a multipli��o dos n�meros
		multi(a,b);
	else if(escolha == 4) //se a escolha for 4, ser� mostrado a divis�o dos n�meros
		div(a,b);
	else //caso n�o seja nenhuma das escolhas, ir� informar que o valor � inv�lido
		printf("Valor invalido");
}
