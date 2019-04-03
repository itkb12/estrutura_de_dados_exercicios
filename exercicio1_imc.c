#include<stdio.h>
#include<math.h>

//Aula 1 - Parte II
//Exercício - Fazer um programa para calcular o IMC e mostrar em que categoria a pessoa se encontra
//Calculo IMC: massa/(altura*altura)

void main(){
	float alt,peso,imc; //todas as variaveis tipo float
	printf("Informe seu peso: ");
	scanf("%f",&peso);
	printf("Informe sua altura: ");
	scanf("%f",&alt);
	imc = peso/(alt*alt); //após informar o peso e altura, o cálculo de imc será feito
	printf("IMC = %2.2f\n",imc);
	if(imc <= 18.5){ //depedendo do resultado, uma mensagem diferente será mostrada
		printf("Abaixo do peso");
	}else if(imc < 25){
		printf("Saudavel");
	}else if(imc <30){
		printf("Peso em excesso");
	}else if(imc < 35){
		printf("Obesidade Grau I");
	}else if(imc < 40){
		printf("Obesidade Grau II (Severa)");
	}else if(imc >= 40){
		printf("Obesidade Grau III (Morbida)");
	}else{
		printf("Coloque um valor valido"); //se não for nenhum resultado dentre esses, então o valor será inválido
	}
}
