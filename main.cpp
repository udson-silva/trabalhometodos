#include <iostream>
#include <time.h>
#include <memory.h>

#include "PRCP.hpp"
#define MAX(X,Y) ((X > Y) ? X : Y)

using namespace std;

int main(){

 



lerDados("i25.txt");


   
}

//• Parâmetro: instância a ser considerada.
//• Procedimento ou função para leitura da instância.
//• Estruturas de dados necessárias para armazenar os dados de entrada.
//• Estruturas de dados para armazenar uma solução. O código deve ser capaz de armazenar 
//várias soluções diferentes.• Procedimento ou função para criação de uma solução inicial para o problema (heurística 
//construtiva). *
//• Procedimento ou função para clonar uma solução qualquer.
//• Procedimento ou função para calcular a função objetivo de uma solução qualquer. **
//• Procedimento ou função para “escrever” (em tela e arquivo) uma solução qualquer com o 
//máximo de informações possível: número de pontos livres, número de conflitos, rótulo 
//selecionado para cada ponto, valor da função objetivo da solução, etc.
//• Procedimento ou função para ler uma solução de um arquivo (parâmetro) com o formato 
//abaixo.


void lerDados(string arq)
{
  
  char Linha[1000];
  char *result;
  int i;
  FILE *f = fopen(arq.c_str(), "r");

  i = 1;
  while (!feof(f))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100000, f);  // o 'fgets' lê até 2000 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
      if(i == 2){
        instancia  = (int) Linha[2];
        printf("Instancia %d", instancia);

      }
      

	  printf("Linha %d : %s",i,Linha);
      i++;
  }
  fclose(f); 




}

