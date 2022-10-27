#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class pessoa{
  public:
    int codigo , idade, numero;
    char complemento[10], nome[10], end[30];

};

int main() {
  pessoa tab[10];
  int i;
  std::cout << "Digite quantas pessoas";
  std::cin >> i;
  for(int j=0;j<i;j++)
  {
    std::cout << "Código: ";
    std::cin >> tab[j].codigo;
    std::cout << "Nome: ";
    std::cin >> tab[j].nome;
    std::cout << "Idade: ";
    std::cin >> tab[j].idade;
    std::cout << "Endereço: ";
    std::cin >> tab[j].end;
    std::cout << "Número: ";
    std::cin >> tab[j].numero;
    std::cout << "Complemento: ";
    std::cin >> tab[j].complemento;
  }
  std::cout << "Nome do arquivo: ";
  char arq[10];
  std::cin >> arq;
  FILE *file;
  strcat (arq, ".txt");
  file = fopen (arq, "w");
  for(int j=0;j<i;j++)
  {
   fprintf (file, "%i ", tab[j].codigo);
   fprintf (file, "%s ", tab[j].nome);
   fprintf (file, "%i ", tab[j].idade);
   fprintf (file, "%s ", tab[j].end);
   fprintf (file, "%i ", tab[j].numero);
   fprintf (file, "%s ", tab[j].complemento);
   fprintf (file, "\n");
  }

  fclose(file);
  
  
}
