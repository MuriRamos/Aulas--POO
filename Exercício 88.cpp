// Exercicio 88
// Exibição de um padrão de sequência de números
#include <iostream>
using namespace std;

// Função para exibir o padrão
void exibirPadrao(int linhas) 
{
   for (int i = 1; i <= linhas; i++) 
   {
      for (int j = 1; j <= i; j++) 
      {
         // Alterna entre 1 e 0 conforme a coluna
         if (i % 2 == 0) 
         {
            // Para linhas pares, a sequência começa com 0
            cout << ((j % 2 == 0) ? 1 : 0) << " ";
         } 
         else 
         {
            // Para linhas ímpares, a sequência começa com 1
            cout << ((j % 2 == 0) ? 0 : 1) << " ";
         }
      }
       // Quebra de linha após cada linha do padrão
       cout << endl;  
    }
}

int main() 
{
    // Define o número de linhas
    int linhas = 5; 
    // Chama a função para exibir o padrão 
    exibirPadrao(linhas);  
    return 0;
}