#include<stdio.h>
#define TAM 5 //primeiro é criado uma contante com tamanho 5 chamada TAM

//Exercício - Parte II
/*
4.Desenvolva Um algoritmo que receba números para preencher um 
vetor (pode ser tam 5, use/defina uma constante para isso) e 
através de retorno de uso de função seja exibido em tela quem é 
o maior e quem é o menor número do vetor. Transcreva abaixo :
*/


//o calculo de maior e menor será feito de duas formas diferentes
//um com uma função inteira dedicada a isso


int maior_menor(int *vetor){ //a função que calculará os dois valores de uma vez só, passando o vetor como parâmetro
	int maior = vetor[0],menor = vetor[0],i; //primeiro o maior o menor tem o valor do primeiro valor nesse vetor
											 //baseado nisso, os outros podem ser maiores ou menores que o primeiro valor
	for(i = 0;i < TAM;i++){
		if(maior > vetor[i]) //se o valor na posição i for maior que valor que estava antes...
			maior = vetor[i];//a variável maior terá esse valor
		else if(menor < vetor[i])//se o valor na posição i for menor que o valor que estava antes...
			menor = vetor[i];//a variável menor terá esse valor
	}
	printf("\n\nForma 1:");
	printf("\nMaior = %d",maior); //mostrando na tela direto da função
	printf("\nMenor = %d",menor);
	return 0;
}

//e outro com uma função calculando a maior
//e outra função calculando a menor
//as duas funções abaixo são a função acima trabalhando separadamente
//a única diferença sendo que a impressão na tela não será direto da função
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
	int i,vet[TAM]; //é criado um vetor do tamanho da constante criada
	for(i = 0;i < TAM;i++){ //o for é para alocar todas as posições do vetor, com o limite do TAM
		printf("Informe um valor a %da posicao no vetor: ",i+1);
		scanf("%d",&vet[i]);
	}
	//depois que todos os valores são alocados, será calculado qual o maior e o menor com a função maior_menor
	maior_menor(vet);
	//ou com a função maior_num e a função menor_num
	printf("\n\nForma 2:");
	printf("\nO maior e %d e o menor e %d",maior_num(vet),menor_num(vet)); //o resultado conseguido de cada função mostrado diretamente na tela
	
}
