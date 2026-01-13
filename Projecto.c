#include <stdio.h>

int main ()
{
  int num;
  
  printf("#************** SISTEMA DE GESTÃO DE BIBLIOTECA **************#\n\n");
  printf("1 - Adicionar Livro\n\n");  
  printf("2 - Editar Livro\n\n");  
  printf("3 - Remover Livro\n\n");  
  printf("4 - Listar Livros\n\n");  
  printf("5 - Pesquisar Livro\n\n");  
  printf("0 - Sair\n\n");
  printf("#*************************************************************#\n\n");
  
  scanf("%d", &num);
  
  if(num==0)
  {
    printf("Saindo...\n");
  }
  else if(num==1)
  {
    printf("Qual livro gostaria de adicionar?\n");
  }
  else if(num==2)
  {
    printf("Qual livro gostaria de editar?\n");
  }
  else if(num==3)
  {
    printf("Qual livro gostaria de remover?\n?");
  }
  else if(num==4)
  {
    printf("Aqui estão os livros: \n");
  }
  else if(num==5)
  {
    printf("Pesquise aqui: \n");
  }else if (num>5)
  {
    printf("Número Inválido\n");
  }

  return 0;
}

