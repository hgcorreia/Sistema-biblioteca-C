#include <stdio.h>
#include <locale.h>

#define limite_LIVROS 100

  struct Livros
  {
    char titulo[50];
    char autor[50];
    int ano;
  };
  
  typedef struct Livros Livros;

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int num;
  int sair = 1;
  
  do
  {
    printf("\n#************** SISTEMA DE GESTÃO DE BIBLIOTECA **************#\n\n");
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
        sair = 0;
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
  }while(sair != 0);
    

  return 0;
}

