/*1.7.8 Fa�a um programa que permita que o usu�rio digite dois valores inteiros. 
Multiplique estes valores guardando o produto em uma terceira vari�vel. 
Mostre o resultado da multiplica��o.*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

        int resultado, valor1, valor2;

    printf("Calculadora de multiplica��o");
    printf("\nDigite o primeiro valor: ");
        scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
        scanf("%i", &valor2);
            resultado = valor1 * valor2;
    printf("%i X %i = %i", valor1, valor2, resultado);
    
    getch();

}