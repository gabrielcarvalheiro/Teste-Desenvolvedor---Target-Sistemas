#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
  int i, j;
  char palavra[10] = "Linguagem";
  char invertida[10];

  for(i=0, j=9;i<10;i++){
    invertida[i] = palavra[j];
    j--;
  }
  for(i=0;i<10;i++){
    cout << invertida[i];
  }
}