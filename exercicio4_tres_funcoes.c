#include<stdio.h>

//Exercício - Parte II
/*
2. Desenvolva um algoritimo em C que receba 2 números inteiros (um positivo outro negativo) 
fornecido pelo usuário e através de 3 mensagens em tela, seja exibido o retorno 
de três funções onde: a primeira retorne a informação do dobro dos números e a segunda,
exiba o resultado da multiplicação entre estes números, e a terceira seja verificado e depois 
retornado em tela se o resultado da multiplicação pela função anterior será positivo ou negativo.
*/

int dobro(int a,int b){ //função que informará o dobro das duas variáveis informadas pelo usuário
	
	printf("\nDobro de %d = %d e dobro de %d = %d",a,2*a,b,2*b); //mostrando direto em tela o calculo do dobro das variáveis
	return 0;
}

int multiplicacao(int a, int b){ //função que informará a multiplicação entre as variáveis
	printf("\n\nA multiplicacao entre %d e %d = %d",a,b,a*b); //mostrando direto em tela o calculo da multiplicação entre as variáveis
	return a*b;
}

void v_ou_f(int m){ //função que verificará se o valor da multiplicacao entre as variaveis foi negativo ou positivo
	printf("\n\n");
	if(m > 0) //se for maior que 0, é positivo
		printf("Valor Positivo");
	else if(m < 0) //menor que zero é negativo
		printf("Valor Negativo");
	else //se não for nenhum dos dois, é nulo
		printf("Valor nulo");
}

void main(){
	int x,y,multi;
	printf("Informe 2 numeros inteiros: ");
	scanf("%d %d",&x,&y);
	dobro(x,y); //primeiro é calculado o dobro de cada uma variável
	multi = multiplicacao(x,y); //depois é calculado a multiplicação e alocado o valor na variável multi
	v_ou_f(multi); //função pegará o valor de multi e verificará se é positivo ou negatio
}
