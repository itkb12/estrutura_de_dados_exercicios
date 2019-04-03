#include<stdio.h>

//Exercício - Parte II
/*
1. Desenvolvaum algoritmo em C que em função informe ao usuário em tela as mensagens :
“VERDADEIRO”: Quandoo usuário informar nº positivo(exemplo: 1,2,3,4,5);
“FALSO”: Quandoo usuário informar nº negativo(ex.: -1,-2,-3 etc)
“VOCÊ PRECISA SELECIONAR UMA DAS OPÇÕES”: Quandoo usuário informar valor Nulo (0).
*/

void positivo_negativo(int numero){
	if (numero > 0) //se o número for maior que zero, é positivo, ou seja, verdadeiro
		printf("VERDADEIRO!");
	else if(numero < 0) //se for menor que zero, é negativo, ou seja, falso
		printf("FALSO!");
	else //caso não seja nenhum dos dois, ou é nulo ou é um valor não inteiro
		printf("VOCE PRECISA SELECIONAR UMA DAS OPCOES");
		
}

void main(){
	int num;
	printf("Informe um numero posivo ou negativo inteiro: ");
	scanf("%d",&num);
	positivo_negativo(num); //a função é chamada para mostrar se o número informado é positivo ou negativo
}

