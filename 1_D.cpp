#include <iostream>
#include <assert.h>
#include <algorithm> 

// D. Os 3 irmaos
int main() {
  unsigned a1, a2, a3;
  std::cin >> a1 >> a2 >> a3;
  assert(a1 >= 1 and a1 <= 10e9);
  assert(a2 >= 1 and a2 <= 10e9);
  assert(a3 >= 1 and a3 <= 10e9);

  while(true) {
	if(a1 <= a2 and a2 <= a3)
	  break;
	if(a2 > a3)
	  std::swap(a2, a3);

	if(a1 <= a2 and a2 <= a3)
	  break;
	if(a1 > a2)
	  std::swap(a1, a2);
  }
  
  std::cout << a1 << " "  << a2 << " " << a3 << std::endl;
  return 0;
}
