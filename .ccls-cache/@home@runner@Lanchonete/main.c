#include <stdio.h>

int main(void) {
  int codigo,quantidade;
   float preco;
  printf("Cardápio\n \n Cachorro Quente R$ 10.20 (cod 100)\n Bauru R$ 10.30 (cod 101)\n Batata Frita R$ 10.50 (cod 102)\n Hambúrguer  R$ 10.20 (cod 103)\n Cheeseburger R$ 10.30 (cod 104)\n Refrigerante R$ 3.00 (cod 105)\n\n" );
  printf("Digite o código: ");
  scanf("%d", &codigo);
  printf("Digite a quantidade: ");
  scanf("%d",&quantidade);

  // comando switch - case
  switch (codigo) {

    case 100:
      preco = 10.20 * quantidade;
      printf("Preço = %f",preco);
    break;
    
    case 101:
      preco =  10.30 * quantidade;
      printf("Preço = %f",preco);
    break;
    
    case 102:
      preco = 10.50 * quantidade;
      printf("Preço = %f",preco );
    break;
    
    case 103:
     preco =  10.20 * quantidade;
       printf("Preço = %f",preco );
    break;
    
    case 104:
      preco = 10.30 * quantidade;
     printf("Preço = %f",preco );
    break;
    
    case 105:
     preco =  3.00 * quantidade;
       printf("Preço = %f",preco);
    break;
    
  }
  
  
  return 0;
}