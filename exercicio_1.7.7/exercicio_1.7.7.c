/*1.7.7 Fa�a um programa que receba do usu�rio um numero qualquer e mostre o quadrado deste n�mero.*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int numero1, resultado;

    printf("Por favor digite um numero para saber seu valor ao quadrado: ");
    scanf("%i", &numero1);
        resultado = numero1 * numero1;
    printf("\nEste � o valor do numero desejado ao quadrado: %i", resultado);

    getch();
}