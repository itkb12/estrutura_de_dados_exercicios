#include<stdio.h>

//Aula 2 - Funcoes
/*Exerc�cio
1) Escrever uma fun��o para fazer um programa que transforme  segundos em horas, minutos e segundos.
   Ex.: 11030 = 3h 3min 50seg
2) Construir uma fun��o que retorne o resto de uma divis�o entre dois n�meros inteiros.

3) Escrever uma fun��o que recebe dois n�meros inteiros, positivo, e determine o produto dos mesmos, utilizando o seguinte m�todo de multiplica��o.
 Dividir, sucessivamente, o primeiro n�mero por 2, at� que se obtenha 1 como quociente;
 Paralelamente, dobrar, sucessivamente, o segundo n�mero;
 Somar os n�meros da segunda coluna que tenham um n�mero  �mpar na primeira coluna. O total obtido � o produto procurado.

*/

int tempo(int seg_tot){ //fun��o que passa de segundos para horas, minutos e segundos;
	int seg,min,hora;
	hora = seg_tot/3600; //hora ser� segundos dividido por 3600(que � o resultado 60min*60segundos)
	min = (seg_tot/60)%60; //minutos primeiro ser� uma divis�o de segundos por 60 e o calculo do resto de um divis�o por 60 novamente
	seg = (seg_tot%60)%60; //segundos ser� o resto de uma divis�o por 60, e o resto novamente de uma divis�o por 60
	
	printf("%dh %dm %ds\n\n",hora,min,seg); //mostrando o resultado
	return 0;
}

int div_int(int a, int b){ //fun��o que far� a divis�o de n�meros inteiros e retornar� o resto
	return a%b;
}

int mult_int(int c, int d){ //fun��o que multiplicar� dois n�meros de uma forma diferenciada
	int tot=0; //inicializando a variavel que receber� o valor total final com 0
	while(c != 1){ //enquanto o primeiro valor recebido n�o for igual a 1, o la�o continuar�
		printf("\nc = %d d= %d",c,d);
		if(c%2 == 1){ //se c for impar, ou seja, a multiplica��o por 2 ter resto...
			tot = tot+(c*d); //o 1o e o 2o valro ser�o multiplicados e resultado ser� somado ao total j� acumulado
		}
		c = c/2; //no final, o 1o valor ser� dividido por 2
		d = d*2; //e o segundo ser� multiplicado por 2
				// isso continuar� at� que o primeiro chegue a 1
	}
	return tot; //o valor total ser� retornado
}



void main(){
	int x,y,w,z; //vari�veis para calculo de multiplica��o e divis�o inteira
	int segundos; //variavel para fazer calculo dos segundos
	
	printf("a)Informe quantos segundos: ");
	scanf("%d",&segundos);
	tempo(segundos); //fun��o que calcular� quantas horas minutos e segundos tem no segundos informado pelo usu�rio
	
	printf("b)Coloque dois numeros inteiros: ");
	scanf("%d %d",&x,&y);
	printf("A divisao de %d e %d tem resto %d",x,y,div_int(x,y)); //a fun��o � chamada diretamente na mostragem da tela
	
	printf("\n\nc)Coloque mais 2 numeros inteiros: ");
	scanf("%d %d",&w,&z);
	printf("\n\nTotal obtido sera %d",mult_int(w,z)); //a fun��o � chamada diretamente na mostragem da tela
}

