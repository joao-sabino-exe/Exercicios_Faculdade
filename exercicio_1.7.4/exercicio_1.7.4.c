/*1.7.4 Fa�a um programa que receba o nome e a idade do usu�rio e depois mostre-os na tela. Devem ser definidas duas vari�veis para guardar nome e idade na mem�ria.*/
/*Para permitir que seu programa identifique acentua��o � necessario setar os seguintes comandos:
Incluir a biblioteca: #include <windows.h>
E definir os comandos dentro do int main:   SetConsoleCP(1252); SetConsoleOutputCP(1252);
E definir no canto inferior direito do VS code no lugar de UTF-8 definir Windows 1252;
*/


#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

char nome [10];
int idade;

printf("Digite seu nome por favor: ");
scanf("%s", nome);
printf("\nAgora digite sua idade por favor: ");
scanf("%i", &idade);
printf("\nEnt�o quer dizer que voc� tem %i anos e se chama %s muito prazer :)", idade, nome);

getch();

}