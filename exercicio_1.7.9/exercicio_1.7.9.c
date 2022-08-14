/*1.7.9 Faça um programa de uma calculadora simples que permita que o usuário digite dois valores inteiros. 
A calculadora, logo após a digitação dos numeros, deverá mostrar o valor da soma, da subtração,
 da multiplicação e da divisão dos valores digitados.*/

 #include <stdio.h>
 #include <windows.h>
 #include <conio.h>
 int main(){

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

        int valor1, valor2, soma, multiplicacao, subtracao, divisao;

    printf("Calculadora das operações básicas");
    printf("\nDigite o primeiro valor para fazer seu calculo: ");
        scanf("%i", &valor1);
    printf("Agora digite o segundo valor: ");
        scanf("%i", &valor2);

            soma = valor1 + valor2;
            subtracao = valor1 - valor2;
            divisao = valor1 / valor2;
            multiplicacao = valor1 * valor2;

    printf("%i + %i = %i", valor1, valor2, soma);
    printf("\n%i - %i = %i", valor1, valor2, subtracao);
    printf("\n%i / %i = %i", valor1, valor2, divisao);
    printf("\n%i x %i = %i", valor1, valor2, multiplicacao);

    getch();
 }