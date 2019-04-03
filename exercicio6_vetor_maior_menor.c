#include<stdio.h>
#define TAM 5 //primeiro � criado uma contante com tamanho 5 chamada TAM

//Exerc�cio - Parte II
/*
4.Desenvolva Um algoritmo que receba n�meros para preencher um 
vetor (pode ser tam 5, use/defina uma constante para isso) e 
atrav�s de retorno de uso de fun��o seja exibido em tela quem � 
o maior e quem � o menor n�mero do vetor. Transcreva abaixo :
*/


//o calculo de maior e menor ser� feito de duas formas diferentes
//um com uma fun��o inteira dedicada a isso


int maior_menor(int *vetor){ //a fun��o que calcular� os dois valores de uma vez s�, passando o vetor como par�metro
	int maior = vetor[0],menor = vetor[0],i; //primeiro o maior o menor tem o valor do primeiro valor nesse vetor
											 //baseado nisso, os outros podem ser maiores ou menores que o primeiro valor
	for(i = 0;i < TAM;i++){
		if(maior > vetor[i]) //se o valor na posi��o i for maior que valor que estava antes...
			maior = vetor[i];//a vari�vel maior ter� esse valor
		else if(menor < vetor[i])//se o valor na posi��o i for menor que o valor que estava antes...
			menor = vetor[i];//a vari�vel menor ter� esse valor
	}
	printf("\n\nForma 1:");
	printf("\nMaior = %d",maior); //mostrando na tela direto da fun��o
	printf("\nMenor = %d",menor);
	return 0;
}

//e outro com uma fun��o calculando a maior
//e outra fun��o calculando a menor
//as duas fun��es abaixo s�o a fun��o acima trabalhando separadamente
//a �nica diferen�a sendo que a impress�o na tela n�o ser� direto da fun��o
//elas apenas retornaram o resultado conseguido

int maior_num(int *vetor){
		int maior = vetor[0],i; 
	for(i = 0;i < TAM;i++){
		if(maior > vetor[i])
			maior = vetor[i];

	}
	return maior;
}

int menor_num(int *vetor){
	int menor = vetor[0],i;
	for(i = 0;i < TAM;i++){
		if(menor < vetor[i])
			menor = vetor[i];
	}
	return menor;
}



void main(){
	int i,vet[TAM]; //� criado um vetor do tamanho da constante criada
	for(i = 0;i < TAM;i++){ //o for � para alocar todas as posi��es do vetor, com o limite do TAM
		printf("Informe um valor a %da posicao no vetor: ",i+1);
		scanf("%d",&vet[i]);
	}
	//depois que todos os valores s�o alocados, ser� calculado qual o maior e o menor com a fun��o maior_menor
	maior_menor(vet);
	//ou com a fun��o maior_num e a fun��o menor_num
	printf("\n\nForma 2:");
	printf("\nO maior e %d e o menor e %d",maior_num(vet),menor_num(vet)); //o resultado conseguido de cada fun��o mostrado diretamente na tela
	
}
