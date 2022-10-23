#include <iostream>
#include <assert.h>

// B. Festa do Ricardo
int main() {
  unsigned long N;
  unsigned long M;
  std::cout << sizeof(unsigned) << std::endl;
  std::cout << sizeof(unsigned long) << std::endl;
  std::cout << sizeof(unsigned long long) << std::endl;  

  std::cin >> N >> M;
  assert(N >= 1);
  assert(M <= 10e15);

  unsigned long res = N / M;

  std::cout << res << std::endl;
  return 0;
}
