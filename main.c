/*-----------------------------------------------------------*
*PROGRAMA: situacaoAluno.cpp - Verifica a situação final 
*do aluno a partir de suas quatro notas obtidas no periodo
*Autor: Hellen Novais
*Data: Fevereiro/2024 - Versão 1.0
*-----------------------------------------------------------*/
#include <stdio.h>

int Nota1 = 7;
int Nota2 = 8;
int Nota3 = 10;
int Nota4 = 10;

int main(void) {

  int Media;
{
  Media = (Nota1 + Nota2 + Nota3 + Nota4)/4;
}
  printf("A média é %d\n", Media);
  if (Media >= 7){
    printf("O aluno está aprovado");
  }else{
    printf("O aluno está reprovado");
  }
}