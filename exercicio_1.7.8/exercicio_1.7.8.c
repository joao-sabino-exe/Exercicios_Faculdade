/*1.7.8 Faça um programa que permita que o usuário digite dois valores inteiros. 
Multiplique estes valores guardando o produto em uma terceira variável. 
Mostre o resultado da multiplicação.*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

        int resultado, valor1, valor2;

    printf("Calculadora de multiplicação");
    printf("\nDigite o primeiro valor: ");
        scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
        scanf("%i", &valor2);
            resultado = valor1 * valor2;
    printf("%i X %i = %i", valor1, valor2, resultado);
    
    getch();

}