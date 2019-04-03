#include<stdio.h>

//Exercicio - Parte II
/*
3.Escreva abaixo um algoritmo em que seja possível ao usuário escolher a 
dimensão de uma estrutura/matriz (onde o usuário define a quantidade de linhas e colunas),
e em seguida seja exibida esta matriz em tela, transcreva o algoritmo para o espaço abaixo. :
*/

void main(){
	int a,b,i,j;
	printf("Escreva o numero de linhas da matriz: ");
	scanf("%d",&a);
	printf("Escreva o numero de colunas: ");
	scanf("%d",&b);
	int vet[a][b]; //depois de usuário escolher a quantidade de linhas e colunas, o valor das varíaveis é usado para criação do vetor
	for(i=0;i<a;i++){ //primeiro rodará todas as colunas na linha, para poder passar para a próxima linha
		for(j=0;j<b;j++){
			printf("\nDefina valor pra linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&vet[i][j]);
		}		
	}
	for(i=0;i<a;i++){ //e por fim é mostrado os valores alocados
		for(j=0;j<b;j++){
			printf("\nLinha %d, Coluna %d = %d",i+1,j+1,vet[i][j]);
		}		
	}
}
