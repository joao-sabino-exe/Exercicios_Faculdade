/*1.7.6 Os funcionários da empresa “ToadaGoo”, recebem para cada hora extra, 50% a mais do valor da hora normal. 
Faça um programa que receba o nome de um funcionário, quantas horas normais e quantas horas extras ele trabalhou, assim como o valor da hora normal.
Mostre, no final do programa, o salario líquido deste funcionário.
*/

/*para imprirmir o que esta ao lado no codigo independente do caracter basta usar o porcentagem caso queira imprimir um valor de porcentagem basta usar duas porcentagem exemplo %%*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main(){

SetConsoleCP(1252);
SetConsoleOutputCP(1252);

float horas_n, horas_e, valor_h, horas_e1, sala2, salario, sala1, sala3;
char nome [20];

printf("Calculadora de Horas extras ToadaGoo.");
    printf("\nPor favor digite seu nome: ");
        scanf("%s", nome);
    printf("\nAgora digite quantas horas horas você trabalhou, desconsiderando as horas extras: ");
        scanf("%f", &horas_n);
    printf("\nAgora digite a quantidade de horas extras trabalhadas: ");
        scanf("%f", &horas_e);
    printf("\nAgora digite quanto recebe por hora trabalhada: ");
        scanf("%f", &valor_h);

        sala1 = valor_h * horas_n;

        sala2 = valor_h * horas_e;

        horas_e1 = sala2 * 0.5;

        salario = horas_e1 + sala1 + sala2;

    printf("\n%s neste mês com suas horas extras voce ira receber R$:%.2f", nome, salario);

    getch();
}