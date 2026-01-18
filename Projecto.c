#include <stdio.h>
#include <locale.h>

#define limite_LIVROS 100

  struct Livros //Dados dos Livros
  {
    char titulo[50];
    char autor[50];
    int ano;
  };
  
  typedef struct Livros Livros;
  
  Livros biblioteca[limite_LIVROS];
  int total_livros = 0;

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int num;
  int sair = 1;
  
  do
  {
    //Menu do Programa
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
      case 0://Sair do Programa
        printf("Saindo...\n");
        sair = 0;
        break;
        
      case 1: //Adicionar livros
        if(total_livros < limite_LIVROS)
        {
          printf("Qual livro gostaria de adicionar?\n");
          getchar();
          
          printf("Título do livro: ");
          fgets(biblioteca[total_livros].titulo, 50, stdin);
          
          printf("Autor do livro: ");
          fgets(biblioteca[total_livros].autor, 50, stdin);
          
          printf("Ano de lançamento: ");
          scanf("%d", &biblioteca[total_livros].ano);
          
          total_livros++;
          printf("Livro adicionado com sucesso!!!\n");
        }else
        {
          printf("Biblioteca cheia!!!\n");
        }
        break;
        
      case 2: //Editar Livros
        
          if (total_livros == 0) 
          {
              printf("A biblioteca está vazia!\n");
          } else 
          {
              int indice;
              printf("Digite o número do livro que deseja editar (1 a %d): ", total_livros);
              scanf("%d", &indice);

              // Ajustamos para o índice do array (ex: utilizador escolhe 1, acessamos a posição 0)
              int posicao = indice - 1;

              if (posicao >= 0 && posicao < total_livros) 
              {
                  printf("A editar: %s", biblioteca[posicao].titulo);
                  getchar();

                  printf("Novo Título: ");
                  fgets(biblioteca[posicao].titulo, 50, stdin);

                  printf("Novo Autor: ");
                  fgets(biblioteca[posicao].autor, 50, stdin);

                  printf("Novo Ano: ");
                  scanf("%d", &biblioteca[posicao].ano);

                  printf("Livro atualizado com sucesso!\n");
              } else 
              {
                  printf("Número inválido!\n");
              }
            }
        break;
        
      case 3://Remover Livros
        printf("Qual livro gostaria de remover?\n");
        break;
        
      case 4://Listar Livros
        printf("Aqui estão os livros: \n");
        printf("Número total: %d\n\n", total_livros);
        
        for(int i = 0; i < total_livros; i++)
        {
          printf("%dº. Título: %s - Autor: %s Ano: (%d)\n\n",
                i+1,
                biblioteca[i].titulo,
                biblioteca[i].autor,
                biblioteca[i].ano);
        }
        break;
        
      case 5://Pesquisar Livros
        printf("Pesquise aqui: \n");
        break;
        
      default://Números Inválidos
        printf("Número Inválido\n");
        break;
    }
  }while(sair != 0);
    

  return 0;
}

