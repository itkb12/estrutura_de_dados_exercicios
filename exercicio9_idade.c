#include<stdio.h>

//Exercicios - Parte II
/*
7.Desenvolva um algoritmo em C que quando o usu�rio informar sua idade, 
seu nome  e seu n� de titulo em tela, se sua idade for maior que 18 e 
tem idade abaixo de 70 anos, informe mensagem que o usu�rio � obrigat�rio vota��o, e 
SE o usu�rio informar idade menor que for igual a 16 e maior que 70, informe em 
tela que o voto � facultativo.
*/

void main(){
	int titulo,idade; //vari�veis para informar t�tulo e idade
	char nome[20]; //vari�vel para informar nome, com o limite de caracteres 20
	printf("Bem vindo a cabine de votacao!");
	printf("\n\nInforme seu nome: ");
	scanf("%s",&nome);
	printf("\nInforme seu Titulo: ");
	scanf("%d",&titulo);
	printf("\nInforme sua idade: ");
	scanf("%d",&idade);
	if((idade >= 18) && (idade <=70)) //se idade estiver entre 18 e 70, a mensagem abaixo aparecer�, falando o nome
		printf("\n%s, voce e obrigado a votar",nome);
	else //caso a idade n�o esteja na faixa acima, a mensagem abaixo aparecer�
		printf("\n%s, o voto e facultativo",nome);
	
}
