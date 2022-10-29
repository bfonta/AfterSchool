#include <iostream>
#include <vector>

int soma(int min, int max, int a[]) {
  int res = 0;
  for(int i=min; i<=max; ++i)
	res += a[i-1];
  return res;
}

// F. Semente de Segmentos
int main() {
  int N, Q;
  std::cin >> N >> Q;
  if(N>1e3 or Q>1e3) {
	std::cout << "N and Q must be lower than 1000." << std::endl;
  }

  int a[N];
  for(int i=0; i<N; ++i)
	std::cin >> a[i];

  std::vector<int> res;
  const int nval=3;
  int valores[nval];
  
  for(int q=0; q<Q; ++q) {
	for(int i=0; i<nval; ++i)
	  std::cin >> valores[i];
	if(valores[0]==1)
	  a[valores[1]-1] = valores[2];
	else if(valores[0]==2) {
	  res.push_back(soma(valores[1], valores[2], a));
	}
  }

  for(auto & x: res)
	std::cout << x << std::endl;

  return 0;
}
