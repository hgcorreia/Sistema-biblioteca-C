#include <stdio.h>

int main ()
{
  int num;
  
  //chatgpt não presta
  printf("#************** SISTEMA DE GESTÃO DE BIBLIOTECA **************#\n\n");
  printf("1 - Adicionar Livro\n\n");  
  printf("2 - Editar Livro\n\n");  
  printf("3 - Remover Livro\n\n");  
  printf("4 - Listar Livros\n\n");  
  printf("5 - Pesquisar Livro\n\n");  
  printf("0 - Sair\n\n");
  printf("#*************************************************************#\n\n");
  
  scanf("%d", &num);
  
  switch (num)
  {
    case 0:
      printf("Saindo...\n");
      break;
    case 1:
      printf("Qual livro gostaria de adicionar?\n");
      break;
    case 2:
      printf("Qual livro gostaria de editar?\n");
      break;
    case 3:
      printf("Qual livro gostaria de remover?\n");
      break;
    case 4:
      printf("Aqui estão os livros: \n");
      break;
    case 5:
      printf("Pesquise aqui: \n");
      break;
    default:
      printf("Número Inválido\n");
      break;
  }

  return 0;
}

