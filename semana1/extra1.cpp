#include <iostream>
#include <assert.h>
using namespace std;

// Exercicio extra 1 (senhor Manuel)
int main() {
  int a = 0;
  short int b = 0;
  if(a == b)
	std::cout << "yes" << std::endl;

  // cout << sizeof(int) << "\n";
  // cout << sizeof(unsigned) << "\n";

  cout << sizeof(int) << "\n";
  cout << sizeof(short) << "\n";

  return 0;
}
