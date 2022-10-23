#include <iostream>
#include <assert.h>

// C. Pedro o trabalhador
int main() {
  bool res = false;
  unsigned A, L, C;
  std::cin >> A >> L >> C;
  assert(A >= 1);
  assert(L <= 100);
  assert(C <= 100);

  unsigned volume = A * L * C;
  if(volume >= 50 and A >= 3)
	res = true;

  std::cout << res << std::endl;
  return 0;
}
