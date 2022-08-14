/*1.7.10 Faça um programa que calcule a media da temperatura ocorrida em um dia. 
O usuário deverá digitar 5 temperaturas e o programa deverá mostrar em tela a média das temperaturas.*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

SetConsoleCP(1252);
SetConsoleOutputCP(1252);

int valor1, valor2, valor3, valor4, valor5, valor6, media;

printf("Descubra a media da temperatura de seu dia");
printf("\nDigite a temperatura de 5 horarios diferentes do seu dia");
printf("\ntemperatura 1: ");
    scanf("%i", &valor1);
printf("temperatura 2: ");
    scanf("%i", &valor2);
printf("temperatura 3: ");
    scanf("%i", &valor3);
printf("temperatura 4: ");
    scanf("%i", &valor4);
printf("temperatura 5: ");
    scanf("%i", &valor5);

        valor6 = valor1 + valor2 + valor3 + valor4 + valor5;
        media = valor6 / 5;

printf("Esta é a media de temperatura do seu dia: %i", media);

getch();

}