#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
int main() {
  long long soma, porcentagem[5];
  double estados[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};

  for(int i=0; i < 5; i++){
    soma = soma + estados[i];
  }
  
  for(int i=0; i < 5; i++){
    porcentagem[i] = (estados[i] * 100)/soma;
  }
  cout << "SP: " << porcentagem[0] << "%\n";
  cout << "RJ: " << porcentagem[1] << "%\n";
  cout << "MG: " << porcentagem[2] << "%\n";
  cout << "ES: " << porcentagem[3] << "%\n";
  cout << "Outros: " << porcentagem[4] << "%\n";
}