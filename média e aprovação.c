//programa que recebe duas notas, calcula a m�dia e aprova��o
#include<stdio.h>
#include<string.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    float n;
    float m;
    char situacao [8];
    printf("Primeira nota:");
    scanf("%f", &n);
    printf("Segunda nota:");
    scanf("%f", &m);
    float media = (n+m) / 2;
    printf("Sua m�dia � %.2f \n", media);
    strcpy(situacao, (media>=7)?"Aprovado":"Reprovado");
    printf("Sua situa��o � %s", situacao);
}
