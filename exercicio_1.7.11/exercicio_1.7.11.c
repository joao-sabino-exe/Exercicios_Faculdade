/*1.7.11 A tabela abaixo mostra o valor do câmbio de moedas estrangeiras para cada real. 
Faça um programa onde o usuário entre com uma quantia em real e o programa mostre este valor
em outras moedas DOLAR: 1.9, EURO: 3.1.
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

SetConsoleCP(1252);
SetConsoleOutputCP(1252);

float dolar, euro, valor;

printf("Conversor de moedas");
printf("\nDigite o valor em real que deseja converter: ");
    scanf("%f", &valor);
        dolar = valor / 1.9;
        euro = valor / 3.1;
printf("Quantia em Dolar $:%.2f", dolar);
printf("\nQuantia em euro $:%.2f", euro);

getch();

}