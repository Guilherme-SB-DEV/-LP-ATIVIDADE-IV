#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[20];
    char data[8];
    float notas[2];
    float media;

} aluno;
aluno alunos[2];

float calcMedia(float nota1, float nota2){
  float resultado = (nota1 + nota2)/2; 
  return resultado;
}


int main(){
    int i, j;
    for(i=0; i<2; i++){
        printf("nome do aluno: ");
        fflush(stdin);
        gets(alunos[i].nome);
        fflush(stdin);
        printf("data de nascimento: ");
        fflush(stdin);
        gets(alunos[i].data);
        fflush(stdin);
        for(j=0; j<2;j++){
            printf("notas: ");
            scanf("%f", &alunos[i].notas[j]);
        }
        printf("media: %.2f\n", calcMedia(alunos[i].notas[0], alunos[i].notas[1]));
      
        if(calcMedia(alunos[i].notas[0], alunos[i].notas[1]) >= 7) printf("status: Aprovado\n");
        else printf("stauts: Reprovado\n");
    }



    return 0;
}
