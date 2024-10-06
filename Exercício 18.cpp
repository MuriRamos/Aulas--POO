// Exercicio 18
// Verificação de número se for positivo ou negativo
#include <iostream>

using namespace std;

int main()
{
   // Campo de inserção do número inteiro	
   int valor;
   int sinal;
   cout << "Insira um número: ";
   cin >> valor;

   // Verificação de entrada do valor
   if (valor > 0)
   {
   	  // Valor POSITIVO
        sinal = 1;   
   }
   else if (valor < 0)
   {
   	  // Valor NEGATIVO
   	  sinal = 2;
   }
   else
   {
   	  // Valor ZERO
   	  sinal = 3;
   }

   // Verificação se o número é POSITIVO ou NEGATIVO
   switch (sinal)
   {
   	  case 1:
   	  cout << "O número: " << valor << "é POSITIVO";
   	  break;
      
        case 2:
   	  cout << "O número: " << valor << "é NEGATIVO";
   	  break;

   	  case 3:
   	  cout << "O número é: " << valor;
   	  break;

   	  default:
   	  cout << "O número inserido não é válido, tente novamente";
   	  break; 
   }
      return 0; 	    	
}