#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int media_mensal(double mensal[30]){
  long long media, soma;
  for(int i = 0; i < 30;i++){
    soma = soma + mensal[i];
  }
  media = soma / 30;
  
  return media;
}

void menor_maior(double mensal[30]){
  int i;
  double menor, maior;
  
  menor = mensal[0];
  maior = mensal[0];
  
  for(i =1; i < 30; i++){
    if(mensal[i] > 0){
      if(mensal[i] <= menor){
      menor = mensal[i];
      }
    }
    if(mensal[i] > maior){
      maior = mensal[i];
    }
  }
  cout << "Dia com maior faturamento: " << maior << "\n";
  cout << "Dia com menor faturamento: " << menor << "\n";
}

void superior(double mensal[30], long long media){
  int cont = 0;
  for(int i = 0; i < 30; i++){
    if(mensal[i] > media){
      cont++;
    }
  }
  cout << "Quantidades de dias com faturamentos acima da média: " << cont << "\n";
}

int main() {
  double mensal[30] = {31490.7866, 37277.9400, 37708.4303, 0.0000, 0.0000, 17934.2269, 0.0000, 6965.1262, 24390.9374, 14279.6481, 0.0000, 0.0000, 39807.6622, 27261.6304, 39775.6434, 29797.6232, 17216.5017, 0.0000, 0.0000, 12974.2000, 28490.9861, 8748.0937, 8889.0023, 17767.5583, 0.0000, 0.0000, 3071.3283, 48275.2994, 10299.6761, 39874.1073};
  
  cout << "Media de faturamento diaria: " << media_mensal(mensal) << "\n";
  menor_maior(mensal);
  superior(mensal, media_mensal(mensal));
}