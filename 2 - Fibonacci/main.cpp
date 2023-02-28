#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void fibonacci(int numero) {
  int fib1 = 1, fib2 = 1, soma;
  for (int i = 0; i <= numero; i++) {
    soma = fib1 + fib2;
    fib1 = fib2;
    fib2 = soma;
    if(numero == soma){
      cout << "Encontrado!! " << soma;
    }else{
      cout << "Nao encontrado!";
    }
  }
}

int main() {
  int numero = 89;
  fibonacci(numero);
}