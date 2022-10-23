#include <iostream>
#include <assert.h>
#include <vector>

// A. Filtro dos Pequenos
int main() {
  int N, K;
  std::cin >> N >> K;
  assert( N <= 10e5 and N >= 1 );
  assert( K <= 10e9 and K >= 1 );

  std::vector<int> a(N);
  for(int i=0; i<N; ++i)
	std::cin >> a[i];

  for(auto& elem : a) {
	if(elem>=K) {
	  std::cout << elem << " ";
	}
  }

  std::cout << std::endl;
  return 0;
}
