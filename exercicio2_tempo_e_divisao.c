#include<stdio.h>

//Aula 2 - Funcoes
/*Exercício
1) Escrever uma função para fazer um programa que transforme  segundos em horas, minutos e segundos.
   Ex.: 11030 = 3h 3min 50seg
2) Construir uma função que retorne o resto de uma divisão entre dois números inteiros.

3) Escrever uma função que recebe dois números inteiros, positivo, e determine o produto dos mesmos, utilizando o seguinte método de multiplicação.
 Dividir, sucessivamente, o primeiro número por 2, até que se obtenha 1 como quociente;
 Paralelamente, dobrar, sucessivamente, o segundo número;
 Somar os números da segunda coluna que tenham um número  ímpar na primeira coluna. O total obtido é o produto procurado.

*/

int tempo(int seg_tot){ //função que passa de segundos para horas, minutos e segundos;
	int seg,min,hora;
	hora = seg_tot/3600; //hora será segundos dividido por 3600(que é o resultado 60min*60segundos)
	min = (seg_tot/60)%60; //minutos primeiro será uma divisão de segundos por 60 e o calculo do resto de um divisão por 60 novamente
	seg = (seg_tot%60)%60; //segundos será o resto de uma divisão por 60, e o resto novamente de uma divisão por 60
	
	printf("%dh %dm %ds\n\n",hora,min,seg); //mostrando o resultado
	return 0;
}

int div_int(int a, int b){ //função que fará a divisão de números inteiros e retornará o resto
	return a%b;
}

int mult_int(int c, int d){ //função que multiplicará dois números de uma forma diferenciada
	int tot=0; //inicializando a variavel que receberá o valor total final com 0
	while(c != 1){ //enquanto o primeiro valor recebido não for igual a 1, o laço continuará
		printf("\nc = %d d= %d",c,d);
		if(c%2 == 1){ //se c for impar, ou seja, a multiplicação por 2 ter resto...
			tot = tot+(c*d); //o 1o e o 2o valro serão multiplicados e resultado será somado ao total já acumulado
		}
		c = c/2; //no final, o 1o valor será dividido por 2
		d = d*2; //e o segundo será multiplicado por 2
				// isso continuará até que o primeiro chegue a 1
	}
	return tot; //o valor total será retornado
}



void main(){
	int x,y,w,z; //variáveis para calculo de multiplicação e divisão inteira
	int segundos; //variavel para fazer calculo dos segundos
	
	printf("a)Informe quantos segundos: ");
	scanf("%d",&segundos);
	tempo(segundos); //função que calculará quantas horas minutos e segundos tem no segundos informado pelo usuário
	
	printf("b)Coloque dois numeros inteiros: ");
	scanf("%d %d",&x,&y);
	printf("A divisao de %d e %d tem resto %d",x,y,div_int(x,y)); //a função é chamada diretamente na mostragem da tela
	
	printf("\n\nc)Coloque mais 2 numeros inteiros: ");
	scanf("%d %d",&w,&z);
	printf("\n\nTotal obtido sera %d",mult_int(w,z)); //a função é chamada diretamente na mostragem da tela
}

