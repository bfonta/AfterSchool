#include <iostream>
#include <algorithm>

// E. Afonso na fila
int main() {
  int N;
  std::cin >> N;

  int a[N];
  for(int i=0; i<N; ++i)
	std::cin >> a[i];

  int contador = 0;
  
  bool tapado;
  int maximo=0;
  for(int i=0; i<N; ++i) {
	if(a[i] > maximo)
	  contador += 1;

	maximo = std::max(maximo, a[i]);
  }

  std::cout << contador << std::endl;
  return 0;
}
