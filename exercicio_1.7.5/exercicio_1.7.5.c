/*1.7.5 Faça um programa que receba o nome do usuario, quantas horas ele trabalhou no mês e o valor da sua hora trabalhada.
Mostre seu nome e o valor do seu salário. Neste caso, você deve reservar variáveis para o nome, quantidade de horas trabalhadas,
valor da hora e para o salario (que será calculado).*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

        float horas, salario, valor;
        char nome [10];

printf("Digite seu nome por favor: ");
scanf("%s", nome);

printf("\nAgora digite a quantidade de horas trabalhadas neste mês: ");
scanf("%f", &horas);

printf("\nAgora digite o valor que recebe por hora trabalhada: ");
scanf("%f", &valor);

salario = valor * horas;

printf("\n%s você ira receber R$:%.2f neste mês.", nome, salario);

getch();
}