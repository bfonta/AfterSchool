#include <iostream>
#include <assert.h>
#include <vector>

// B. Cabo de Guerra
int main() {
  int N;
  std::cin >> N;
  assert( N%2==0 and N <= 10e5 and N >= 1 );

  std::vector<int> f(N);
  for(int i=0; i<N; ++i) {
	std::cin >> f[i];
	assert( f[i] <= 2000 and f[i] >= 1 );
  }

  int sumA=0, sumB=0;
  for(int i=0; i<N; ++i) {
	if(i%2==0) sumA += f[i];
	else sumB += f[i];
  }

  char res = sumA > sumB ? 'A' : sumA < sumB ? 'B': 'E';
  std::cout << res << std::endl;
  return 0;
}
