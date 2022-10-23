#include <iostream>
#include <assert.h>

// Exercicio extra 3 (dias de um ano bissexto)
int main() {
  int mes, ndias;
  std::cin >> mes;
  assert(mes <= 12 and mes >= 1);

  if(mes==2)
	ndias = 29;
  else {
	bool m8 = mes < 8;
	if(mes%2==0)
	  ndias = m8 ? 30 : 31;
	else 
	  ndias = m8 ? 31 : 30;
  }
  std::cout << ndias << std::endl;
  return 0;
}
