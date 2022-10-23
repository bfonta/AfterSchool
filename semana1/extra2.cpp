#include <iostream>

// Exercicio extra 2 (Leonor)
int main() {
  char letra, seguinte;
  std::cin >> letra;
  if(letra == 'z')
	seguinte = 'a';
  else {
	int id = letra;
	seguinte = letra+1;
  }
  std::cout << seguinte << std::endl;
  return 0;
}
