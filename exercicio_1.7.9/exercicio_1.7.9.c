/*1.7.9 Fa�a um programa de uma calculadora simples que permita que o usu�rio digite dois valores inteiros. 
A calculadora, logo ap�s a digita��o dos numeros, dever� mostrar o valor da soma, da subtra��o,
 da multiplica��o e da divis�o dos valores digitados.*/

 #include <stdio.h>
 #include <windows.h>
 #include <conio.h>
 int main(){

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

        int valor1, valor2, soma, multiplicacao, subtracao, divisao;

    printf("Calculadora das opera��es b�sicas");
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