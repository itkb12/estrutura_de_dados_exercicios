#include<stdio.h>

//Exercicios - Parte II
/*
8.	Escrever no espa�o o algoritmo para ler e imprimir dois n�meros 
inteiros positivos. Atrav�s de fun��es, demonstre:
-	Se o primeiro numero for positivo, imprima o seu quadrado;
-	Se o segundo n�mero for maior que 10 e menor que 100, imprimir a 
	mensagem: "N�mero est� entre 10 e 100 - intervalo permitido";
-	Se o segundo n�mero for menor que o primeiro, calcular e imprimir 
	a diferen�a (um menos o outro) entre eles, caso contr�rio, imprimir 
	o primeiro n�mero adicionado de 1 .
*/

void quadrado(int x){ //fun��o que calcular� o quadrado do primeiro valor informado
	if(x > 0) //mas apenas se ele for positivo
		printf("\nQuadrado de %d = %d",x,x*x);
}

void intervalo(int y){ //fun��o que verificar� se o segundo valor est� entre 10 e 100
	if((y > 10) && (y < 100))
		printf("\n%d esta entre 10 e 100 - intervalo permitido",y);//se tiver, aparecer� essa mensagem
}

void dif_ou_1(int x, int y){ //fun��o que far� 3 coisas:
	if(y < x)//se 1o valor informado for maior que o 2o...
		printf("\n%d - %d = %d",x,y,x-y);//far� uma subtra��o do 1o pelo 2o
	else//se n�o for
		printf("\n%d + 1 = %d",x,x+1);//ir� adicionar 1 ao primeiro valor
}

void main(){
	int a,b;
	printf("Insira valores para a e b:\n");
	scanf("%d %d",&a,&b);
	quadrado(a); //fun��o que calcula o quadrado do 1o valor sendo chamada
	intervalo(b); //fun��o que verifica se o 2o valor est� no intervalo sendo chamaada
	dif_ou_1(a,b); //fun��o que verifica se o 1o valor � maior que o 2o sendo chamada
}
