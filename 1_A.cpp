#include <iostream>
#include <assert.h>

int main() {
  std::string name = "";
  std::cin >> name;
  assert( name.length() <= 10 );
  std::cout << "Bom dia " + name + "!" << std::endl;
  return 0;
}
