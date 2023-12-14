

#include <stdio.h>
#include <stdlib.h>
typedef struct conta
{
    char titular[20];
    char numero[14];
    float saldo;
    char tipo[10];
}conta;

conta Conta;

float sacar(float valor){
    Conta.saldo -= valor;
    return Conta.saldo;
}
void cadastrar(){
    printf("titular: ");
    gets(Conta.titular);
    fflush(stdin);
    printf("numero da conta: ");
    gets(Conta.numero);
    fflush(stdin);
    printf("tipo: ");
    gets(Conta.tipo);
    printf("saldo: ");
    scanf("%f", &Conta.saldo);
    return;
}
float depositar(float valor){
    Conta.saldo += valor;
    return Conta.saldo;
}
void consultar(){
  printf("titular: %s\n", Conta.titular);
  printf("numero da conta: %s\n", Conta.numero);
  printf("tipo: %s\n", Conta.tipo);
  printf("saldo: %f\n", Conta.saldo);
  return;
}




int main(){
    float valor;
    conta Conta;
    int opcao=0;

    cadastrar();

    printf("1. sacar\n2. depositar\n3. cadastrar\n4. caonsultar\n");
    printf("opcao: ");
    scanf("%i", &opcao);
    switch (opcao)
    {
    case 1:
        printf("quanto sacar: ");
        scanf("%f", &valor);
        printf("titular: %s\n", Conta.titular);
        printf("%.2f", sacar(valor));
        break;
    case 2:
        printf("quanto depositar: ");
        scanf("%f", &valor);
        depositar(valor);
    case 3:
        cadastrar();
    case 4:
        consultar();
    default:
        break;
    }


    return 0;
}
