#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados_protuto {
  char nome[20];
  int quantidade;
  float preco;

} dados_produto;
dados_produto produtos[3];

float realizarCompra(int quantidadeVendida) {
  
  int opcaoProduto;
  
  printf("0. %s\n1. %s\n2. %s\n", produtos[0].nome, produtos[1].nome,
         produtos[2].nome);
  
  printf("opcao: ");
  scanf("%i", &opcaoProduto);
  
  float result = quantidadeVendida * produtos[opcaoProduto].preco;

  produtos[opcaoProduto].quantidade -= quantidadeVendida;
  return result;
}


void consulta(dados_produto *produtos) {
  for (int i = 0; i < 3; i++) {
    printf("nome: %s\n", produtos[i].nome);
    printf("quantidade: %i\n", produtos[i].quantidade);
    printf("preco: %.2f\n", produtos[i].preco);
  }
  return;
}

int main() {
  int opcao;
  int quantidadeVendida;
  strcpy(produtos[0].nome, "arroz");
  produtos[0].quantidade = 10;
  produtos[0].preco = 25.00;

  strcpy(produtos[1].nome, "feijao");
  produtos[1].quantidade = 20;
  produtos[1].preco = 25.00;

  strcpy(produtos[2].nome, "macarrao");
  produtos[2].quantidade = 30;
  produtos[2].preco = 25.00;
  do{
    
    printf("1. realizar compra\n2. consultar estoque\n3. sair\n");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
      printf("quantidade: ");
      scanf("%i", &quantidadeVendida);
      printf("total da compra: %.2f\n", realizarCompra(quantidadeVendida));
      break;
  
    case 2:
      consulta(produtos);
      break;
  
    default:
      break;
    }
  }while(opcao<3);
  return 0;
}