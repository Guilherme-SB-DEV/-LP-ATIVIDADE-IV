#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Funcionario {
  char nome[20];
  float salario;
  char cargo[20];
} Funcionario;
Funcionario funcionario[5];

float calcMedia(Funcionario funcionario[]) {
  float soma = 0;
  float counter = 0;
  for (int i = 0; i < 5; i++) {
    if (strcmp(funcionario[i].cargo, "programador") == 0) {
      soma += funcionario[i].salario;
      counter++;
    }
  }
  return soma / counter;

}

int main() {
  float salarios;
  strcpy(funcionario[0].nome, "Joao");
  funcionario[0].salario = 10000;
  strcpy(funcionario[0].cargo, "programdor");

  strcpy(funcionario[1].nome, "Claudio");
  funcionario[1].salario = 1500;
  strcpy(funcionario[1].cargo, "programador");

  strcpy(funcionario[2].nome, "Jose");
  funcionario[2].salario = 12000;
  strcpy(funcionario[2].cargo, "gerente");

  strcpy(funcionario[3].nome, "Juan");
  funcionario[3].salario = 8000;
  strcpy(funcionario[3].cargo, "analista");

  strcpy(funcionario[4].nome, "Henrique");
  funcionario[4].salario = 5000;
  strcpy(funcionario[4].cargo, "programador");

  printf("media: %.2f", calcMedia(funcionario));

  return 0;
}