#include<stdio.h>

//Exerc�cio - Parte II
/*
2. Desenvolva um algoritimo em C que receba 2 n�meros inteiros (um positivo outro negativo) 
fornecido pelo usu�rio e atrav�s de 3 mensagens em tela, seja exibido o retorno 
de tr�s fun��es onde: a primeira retorne a informa��o do dobro dos n�meros e a segunda,
exiba o resultado da multiplica��o entre estes n�meros, e a terceira seja verificado e depois 
retornado em tela se o resultado da multiplica��o pela fun��o anterior ser� positivo ou negativo.
*/

int dobro(int a,int b){ //fun��o que informar� o dobro das duas vari�veis informadas pelo usu�rio
	
	printf("\nDobro de %d = %d e dobro de %d = %d",a,2*a,b,2*b); //mostrando direto em tela o calculo do dobro das vari�veis
	return 0;
}

int multiplicacao(int a, int b){ //fun��o que informar� a multiplica��o entre as vari�veis
	printf("\n\nA multiplicacao entre %d e %d = %d",a,b,a*b); //mostrando direto em tela o calculo da multiplica��o entre as vari�veis
	return a*b;
}

void v_ou_f(int m){ //fun��o que verificar� se o valor da multiplicacao entre as variaveis foi negativo ou positivo
	printf("\n\n");
	if(m > 0) //se for maior que 0, � positivo
		printf("Valor Positivo");
	else if(m < 0) //menor que zero � negativo
		printf("Valor Negativo");
	else //se n�o for nenhum dos dois, � nulo
		printf("Valor nulo");
}

void main(){
	int x,y,multi;
	printf("Informe 2 numeros inteiros: ");
	scanf("%d %d",&x,&y);
	dobro(x,y); //primeiro � calculado o dobro de cada uma vari�vel
	multi = multiplicacao(x,y); //depois � calculado a multiplica��o e alocado o valor na vari�vel multi
	v_ou_f(multi); //fun��o pegar� o valor de multi e verificar� se � positivo ou negatio
}
