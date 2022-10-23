#include <iostream>
#include <assert.h>

// Exercicio extra 1 (senhor Manuel)
int main() {
  int valor, dinheiro;
  std::cin >> valor >> dinheiro;
  assert(valor <= dinheiro);

  int troco = dinheiro - valor;
  int n5 = troco / 5;
  int n2 = (troco%5) / 2;
  int n1 = troco - n5*5 - n2*2;
  
  std::cout << n5 << " " << n2 << " " << n1 << std::endl;
  return 0;
}
