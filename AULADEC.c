#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	/*
	printf("Oi, tudo bem? Tenho 6 anos e programo. \n");
	
	printf("Valor inteiro: %d.\n", 10);
	printf("Valor real: %f.\n", 3.14159265);
	printf("Valor real com apenas duas casas: %.2f. \n", 3.14159265);
	printf("Dado de texto: %c.\n",'a');
	printf("Dado de texto: %s.\n", "testando");
	*/
	
	
	/*
	int idade = 0;
	
	printf("Valor inicial da idade: %d.\n", idade);
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Idade informada:%d.\n", idade);
	*/
	
	//NÃO É CERTO DE SER FEITO
	/*int idade = 0;
	int ano = 1950;
	
	printf("Valor inicial da idade: %d.\n", idade);
	printf("Valor inicial do ano: %d.\n", ano);
	
	printf("Digite uma idade:\n");
	scanf("%d %d", &idade, &ano);
	
	printf("Idade informada: %d.\n", idade);
	printf("Ano informado: %d.\n", ano);
	*/
	
	//O CORRETO DE SER FEITO
	/*int idade = 0;
	float peso = 0.0;
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Digite o peso desejado:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
	printf("Peso informado: %.2f.\n", peso);
	*/
	
	//CALCULOS BASICOS
	/*int A, B, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A+B;
	subtr = A-B;
	mult = A * B;
	divis = A / B;
	
	printf("Resulatados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtracao: %d.\n", subtr);
	printf("Multiplicacao: %d.\n", mult);
	printf("Divisao: %d.\n", divis);*/
	
	
	//O VALOR JA E INICIALIZADO NO PROGRAMA
	/*int dado = 10;
	 printf("Dado antes do incremento: %d.\n", dado);
	 
	 dado++;
	 printf("Depois do incremento: %d.\n", dado);
	 
	 dado--;
	 printf("Depois do decremento: %d.\n", dado);
	 
	 dado += 3;
	 printf("Depois do incremento em 3 unidades: %d.\n", dado);
	 
	 dado -= 2;
	 printf("Depois do decremento em 2 unidades: %d.\n", dado);
	 
	 dado *= 10;
	 printf("Depois de multiplicar por 10: %d.\n", dado);*/
	
	
	
	//O USUARIO FORNECE O VALOR DESEJADO
	 /*int dado;
	printf("Digite o valor de dado:");
	scanf("%d", &dado);
	
	 printf("Dado antes do incremento: %d.\n", dado);
	 
	 dado++;
	 printf("Depois do incremento: %d.\n", dado);
	 
	 dado--;
	 printf("Depois do decremento: %d.\n", dado);
	 
	 dado += 3;
	 printf("Depois do incremento em 3 unidades: %d.\n", dado);
	 
	 dado -= 2;
	 printf("Depois do decremento em 2 unidades: %d.\n", dado);
	 
	 dado *= 10;
	 printf("Depois de multiplicar por 10: %d.\n", dado);*/
	
	//EXERCICIOS
	//PRIMEIRO JEITO DE SER FEITO
	/*printf("1 - Cliente\n");
	printf("2 - Fornecedores\n");
	printf("3 - Faturas\n\n");
	
	printf("0 - Sair\n\n");
	
	
	//SEGUNDO JEITO DE SER FEIO
	printf("1 - Cliente\n2 - Fornecedores\n3 - Faturas\n\n0 - Sair");*/
	
	/*
	Crie um progarama que faca a leitura de 3 numeros, calcule e mostre como saida a soma deses tres numeros
	*/
	
	/*int num1, num2, num3, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);
	
	soma = num1 + num2 + num3;
	
	printf("A soma dos tres numeros: %d.\n", soma);*/
	
	/*
	Faca um programa que leia 3 notas, calcule e mostre a media das notas
	*/
	
	/*float nota1, nota2, nota3, soma, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segundo nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceiro nota: ");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf("A media das tres notas: %.2f.\n", media);*/
	
	
	/*
	Faca um progarama que receba o salario de um funcinario, calcule e mostre o novo salario, sabendo-se que ele recebeu um aumento de 25%
	*/
	 
	 /*float salario, novosalario;
	 
	 printf("Digite o salario sem reajuste: ");
	 scanf(" %f", &salario);
	 
	 novosalario = salario + (salario*0.25);
	 
	 printf("O novo salario com reajuste:R$ %.2f\n",novosalario);*/
	
	
	/*
	Faca um programa que reecba o salário-base de um funcionario, calcule e mostre o salario a receber, sabendo-se que esse funcionario recebe uma gatificao de 5% 
	sobre oo salário-base e paga imposto de 7% sobre o salário-base*/
	
	/*float salariobase, gratsalario, impsalario, novosalario;
	
	printf("Digite o salario sem reajuste: ");
	 scanf(" %f", &salariobase);
	 
	 gratsalario =(salariobase*0.05);
	 impsalario = (salariobase*0.07);
	 novosalario = salariobase + gratsalario - impsalario;
	 
	 printf("A gratificaco de: %.2f\n", gratsalario);
	 printf("O imposto de: %.2f\n", impsalario);
	 printf("O novo salario com reajuste:R$ %.2f\n",novosalario);*/
	 
	 
	 //USANDO O IF
	 
	/* float m;
	 
	 printf("Insiara a nota:\n");
	 scanf(" %f",&m);
	 
	 if(m >= 7.0){
	 	printf("Aprovado(a)!\n");
	 }*/
	 
	//Criando operacoes logico-relacionais
	// - Conjuncao 
	
	/*float m;
	 
	 printf("Insiara a nota:\n");
	 scanf(" %f",&m);
	 
	 if(m >= 4.0 &&/*e*/ /*m < 7.0){
	 	printf("Tem direito a exame!\n");
	 }*/
	
	
	//- Disjuncao
	
	/*float m;
	 
	 printf("Insiara a nota:\n");
	 scanf(" %f",&m);
	 
	 if(m >= 4.0 ||/*ou*/ /*m < 7.0){
	 	printf("Tem direito a exame!\n");
	 }*/
	 
	 
	//- Inversao
	
	/*float m;
	 
	 printf("Insiara a nota:\n");
	 scanf(" %f",&m);
	 
	 if(m >= 4.0 !/*não lógico*/ /*){
	 	printf("Tem direito a exame!\n");*/
	 	
	
	// USANDO O IF E O ELSE
	
	/*float m;
	 
	 printf("Insiara a nota:\n");
	 scanf(" %f",&m);
	 
	 if(m >= 7.0){
	 	printf("Aprovado(a)!\n");
	 }
	 else{
	 	printf("Reprovado(a)!\n");
	 }*/
	 
	 //INVERTENDO A CONDICAO
	 
	 /*float m;
	 
	 printf("Insiara a nota:\n");
	 scanf(" %f",&m);
	 
	 if(m < 7.0){
	 	printf("Reprovado(a)!\n");
	 }
	 else{
	 	printf("Aprovado(a)!\n");	
	 }*/
	 
	 //EXERCICIO DE IF ELSE
	 // 1 - questao
	 /*int abacates;
	 float total;
	 
	 printf("Digite o total de abacates comprado pelo cliente: ");
	 scanf("%d", &abacates);
	 
	 if(abacates <=12){
	 	total = abacates * 1.0;
	}
	else if (abacates <=25){
		total = abacates *0.90;
	}else{
		total = abacates * 0.75;
	}
	
	printf("Abacates comprados: %d \nO valor pago pelos abacates foi: R$ %.2f\n", abacates, total);*/
	
	// 2 - questao
	/*float altura, pesoideal;
	char sexo;
	
	printf("Digite sua altura:");
	scanf("%f", &altura);
	
	printf("Digite o sexo (F - M):");
	scanf(" %s", &sexo);
	
	// || OU - onde somente uma das condicoes precisa ser verdadeira
	// && E - onde as duas condicoes devem ser verdadeiras
	
	if(sexo == 'M'|| sexo == 'm'){
		pesoideal = (72.7*altura) - 58;
	}
	else if(sexo =='F'|| sexo == 'f'){
		pesoideal = (62.1*altura)-44.7;
	}
	else{
		printf("Sexo digitado incorreto!!!\n");
	}
	
	printf("O peso ideal: %.2f\n", pesoideal);*/
	
	return 0;
}
