//programa que recebe 4 notas e calcula a média
#include<stdio.h>
#include<stdlib.h>
int main(void)
{

  float nota1, nota2, nota3 , nota4, media;

  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);

  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);

  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&nota3);

  printf("Digite a quarta nota do aluno: ");
  scanf("%f",&nota4);

  media = (nota1 + nota2 + nota3 +nota4) / 4;

  printf("Media do aluno = %.1f\n",media);

  system("pause");
  return 0;
}
