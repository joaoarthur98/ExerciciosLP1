#include <iostream>
using namespace std;

void imprimir(int numero){
    std::cout << numero << std::endl;
}

int ehPar(int numero){
  if(numero%2 == 0)
    return 1;
  else
    return 0;
}

int main(){
  int numero;
  int indice = 1;

  cout << "Digite um numero: " << endl;
  cin >> numero;

  while(indice <= numero){
    if(ehPar(indice) == 1){
      imprimir(indice);
      indice++;
    }
    else{
      indice++;
    }
  }
}