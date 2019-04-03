#include<stdio.h>
#include<math.h>

//Exercício - Parte II
/*
6.Desenvolva um algoritimo que o usuário informe dois números e 
que através de chamada de funções seja retornado em tela o seguinte:
O dobro destes números
O quadrado destes números 
A divisão entre os números
O resto da divisão entre os números 
E diga se :
O resultado da soma entre os números foi uma resposta positiva ou se foi uma resposta negativa
*/

void dobro(int x, int y){ //função que calculará o valor do dobro dos dois números informados pelo usuário
	printf("\nDobro de %d = %d e Dobro de %d = %d",x,x*2,y,y*2); //e mostrará na tela
}

void quadrado(int x, int y){ //função que calculára o valor do quadrado dos dois números informados pelo usuário
	printf("\nQuadrado de %d = %d e Quadrado de %d = %d",x,x*x,y,y*y); //e mostrará na tela
}

void div(int x, int y){ //função que calculará a divisão dos dois numeros informados
	printf("\nDivisao de %d por %d = %d",x,y,x/y);//e mostrará na tela
}

void resto(int x, int y){//função que calculára o resto da divisão dos dois números informados
	printf("\nResto da divisao entre %d e %d = %d",x,y,x%y);//e mostrará na tela
}

void resposta(int x, int y){//e por fim, mostrará se a soma entre os dois valores será positivo ou negativo (ou nulo)
	int soma = x + y; //variável soma será a adição entre x e y, valores informados pelo usuário
	printf("\n\nSoma entre %d e %d = %d",x,y,soma);
	if(soma > 0) //se soma for maior que 0 é positivo
		printf("\nPositivo");
	else if(soma < 0)//se for menor que 0 é negativo
		printf("\nNegativo");
	else //se não for nenhum dos dois é nulo
		printf("\nValor nulo");
}

void main(){
	int a,b;
	printf("Informe valor para a e b: \n");
	scanf("%d %d",&a,&b);
	dobro(a,b); //função de calcular o dobro sendo chamada
	quadrado(a,b); //função de calcular o quadrado sendo chamada
	div(a,b); //função de calcular a divisão sendo chamada
	resto(a,b); //função de calcular o resto sendo chamada
	resposta(a,b); //função de calcular a soma e mostrar se o resultado é positivo ou negativo sendo chamada
	
}


