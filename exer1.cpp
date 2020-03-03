#include <iostream>
using namespace std;

double realizaMedia(double n1, double n2, double n3){
  return (n1+n2+n3)/2;
}

void imprimir(double numero){
    std::cout << numero << std::endl;
}

int main(){
    double pontuacao1, pontuacao2, pontuacao3;

    std::cout << "Digite a pontuacao do 1° jogador: " << std::endl;
    std::cin >> pontuacao1;

    std::cout << "Digite a pontuacao do 1° jogador: " << std::endl;
    std::cin >> pontuacao2;

    std::cout << "Digite a pontuacao do 3° jogador: " << std::endl;
    std::cin >> pontuacao3;

    double media = realizaMedia(pontuacao1
    ,pontuacao2, pontuacao3);

    imprimir(media);
}