#include<stdio.h>

//Exercicio - Parte II
/*
3.Escreva abaixo um algoritmo em que seja poss�vel ao usu�rio escolher a 
dimens�o de uma estrutura/matriz (onde o usu�rio define a quantidade de linhas e colunas),
e em seguida seja exibida esta matriz em tela, transcreva o algoritmo para o espa�o abaixo. :
*/

void main(){
	int a,b,i,j;
	printf("Escreva o numero de linhas da matriz: ");
	scanf("%d",&a);
	printf("Escreva o numero de colunas: ");
	scanf("%d",&b);
	int vet[a][b]; //depois de usu�rio escolher a quantidade de linhas e colunas, o valor das var�aveis � usado para cria��o do vetor
	for(i=0;i<a;i++){ //primeiro rodar� todas as colunas na linha, para poder passar para a pr�xima linha
		for(j=0;j<b;j++){
			printf("\nDefina valor pra linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&vet[i][j]);
		}		
	}
	for(i=0;i<a;i++){ //e por fim � mostrado os valores alocados
		for(j=0;j<b;j++){
			printf("\nLinha %d, Coluna %d = %d",i+1,j+1,vet[i][j]);
		}		
	}
}
