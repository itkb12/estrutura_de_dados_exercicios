#include<stdio.h>

//Exercicios - Parte II
/*
8.	Escrever no espaço o algoritmo para ler e imprimir dois números 
inteiros positivos. Através de funções, demonstre:
-	Se o primeiro numero for positivo, imprima o seu quadrado;
-	Se o segundo número for maior que 10 e menor que 100, imprimir a 
	mensagem: "Número está entre 10 e 100 - intervalo permitido";
-	Se o segundo número for menor que o primeiro, calcular e imprimir 
	a diferença (um menos o outro) entre eles, caso contrário, imprimir 
	o primeiro número adicionado de 1 .
*/

void quadrado(int x){ //função que calculará o quadrado do primeiro valor informado
	if(x > 0) //mas apenas se ele for positivo
		printf("\nQuadrado de %d = %d",x,x*x);
}

void intervalo(int y){ //função que verificará se o segundo valor está entre 10 e 100
	if((y > 10) && (y < 100))
		printf("\n%d esta entre 10 e 100 - intervalo permitido",y);//se tiver, aparecerá essa mensagem
}

void dif_ou_1(int x, int y){ //função que fará 3 coisas:
	if(y < x)//se 1o valor informado for maior que o 2o...
		printf("\n%d - %d = %d",x,y,x-y);//fará uma subtração do 1o pelo 2o
	else//se não for
		printf("\n%d + 1 = %d",x,x+1);//irá adicionar 1 ao primeiro valor
}

void main(){
	int a,b;
	printf("Insira valores para a e b:\n");
	scanf("%d %d",&a,&b);
	quadrado(a); //função que calcula o quadrado do 1o valor sendo chamada
	intervalo(b); //função que verifica se o 2o valor está no intervalo sendo chamaada
	dif_ou_1(a,b); //função que verifica se o 1o valor é maior que o 2o sendo chamada
}
