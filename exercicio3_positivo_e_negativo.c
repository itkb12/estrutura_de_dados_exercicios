#include<stdio.h>

//Exerc�cio - Parte II
/*
1. Desenvolvaum algoritmo em C que em fun��o informe ao usu�rio em tela as mensagens :
�VERDADEIRO�: Quandoo usu�rio informar n� positivo(exemplo: 1,2,3,4,5);
�FALSO�: Quandoo usu�rio informar n� negativo(ex.: -1,-2,-3 etc)
�VOC� PRECISA SELECIONAR UMA DAS OP��ES�: Quandoo usu�rio informar valor Nulo (0).
*/

void positivo_negativo(int numero){
	if (numero > 0) //se o n�mero for maior que zero, � positivo, ou seja, verdadeiro
		printf("VERDADEIRO!");
	else if(numero < 0) //se for menor que zero, � negativo, ou seja, falso
		printf("FALSO!");
	else //caso n�o seja nenhum dos dois, ou � nulo ou � um valor n�o inteiro
		printf("VOCE PRECISA SELECIONAR UMA DAS OPCOES");
		
}

void main(){
	int num;
	printf("Informe um numero posivo ou negativo inteiro: ");
	scanf("%d",&num);
	positivo_negativo(num); //a fun��o � chamada para mostrar se o n�mero informado � positivo ou negativo
}

