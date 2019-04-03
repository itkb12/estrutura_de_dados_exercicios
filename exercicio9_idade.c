#include<stdio.h>

//Exercicios - Parte II
/*
7.Desenvolva um algoritmo em C que quando o usuário informar sua idade, 
seu nome  e seu nº de titulo em tela, se sua idade for maior que 18 e 
tem idade abaixo de 70 anos, informe mensagem que o usuário é obrigatório votação, e 
SE o usuário informar idade menor que for igual a 16 e maior que 70, informe em 
tela que o voto é facultativo.
*/

void main(){
	int titulo,idade; //variáveis para informar título e idade
	char nome[20]; //variável para informar nome, com o limite de caracteres 20
	printf("Bem vindo a cabine de votacao!");
	printf("\n\nInforme seu nome: ");
	scanf("%s",&nome);
	printf("\nInforme seu Titulo: ");
	scanf("%d",&titulo);
	printf("\nInforme sua idade: ");
	scanf("%d",&idade);
	if((idade >= 18) && (idade <=70)) //se idade estiver entre 18 e 70, a mensagem abaixo aparecerá, falando o nome
		printf("\n%s, voce e obrigado a votar",nome);
	else //caso a idade não esteja na faixa acima, a mensagem abaixo aparecerá
		printf("\n%s, o voto e facultativo",nome);
	
}
