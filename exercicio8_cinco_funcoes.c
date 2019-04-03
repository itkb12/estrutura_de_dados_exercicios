#include<stdio.h>
#include<math.h>

//Exerc�cio - Parte II
/*
6.Desenvolva um algoritimo que o usu�rio informe dois n�meros e 
que atrav�s de chamada de fun��es seja retornado em tela o seguinte:
O dobro destes n�meros
O quadrado destes n�meros 
A divis�o entre os n�meros
O resto da divis�o entre os n�meros 
E diga se :
O resultado da soma entre os n�meros foi uma resposta positiva ou se foi uma resposta negativa
*/

void dobro(int x, int y){ //fun��o que calcular� o valor do dobro dos dois n�meros informados pelo usu�rio
	printf("\nDobro de %d = %d e Dobro de %d = %d",x,x*2,y,y*2); //e mostrar� na tela
}

void quadrado(int x, int y){ //fun��o que calcul�ra o valor do quadrado dos dois n�meros informados pelo usu�rio
	printf("\nQuadrado de %d = %d e Quadrado de %d = %d",x,x*x,y,y*y); //e mostrar� na tela
}

void div(int x, int y){ //fun��o que calcular� a divis�o dos dois numeros informados
	printf("\nDivisao de %d por %d = %d",x,y,x/y);//e mostrar� na tela
}

void resto(int x, int y){//fun��o que calcul�ra o resto da divis�o dos dois n�meros informados
	printf("\nResto da divisao entre %d e %d = %d",x,y,x%y);//e mostrar� na tela
}

void resposta(int x, int y){//e por fim, mostrar� se a soma entre os dois valores ser� positivo ou negativo (ou nulo)
	int soma = x + y; //vari�vel soma ser� a adi��o entre x e y, valores informados pelo usu�rio
	printf("\n\nSoma entre %d e %d = %d",x,y,soma);
	if(soma > 0) //se soma for maior que 0 � positivo
		printf("\nPositivo");
	else if(soma < 0)//se for menor que 0 � negativo
		printf("\nNegativo");
	else //se n�o for nenhum dos dois � nulo
		printf("\nValor nulo");
}

void main(){
	int a,b;
	printf("Informe valor para a e b: \n");
	scanf("%d %d",&a,&b);
	dobro(a,b); //fun��o de calcular o dobro sendo chamada
	quadrado(a,b); //fun��o de calcular o quadrado sendo chamada
	div(a,b); //fun��o de calcular a divis�o sendo chamada
	resto(a,b); //fun��o de calcular o resto sendo chamada
	resposta(a,b); //fun��o de calcular a soma e mostrar se o resultado � positivo ou negativo sendo chamada
	
}


