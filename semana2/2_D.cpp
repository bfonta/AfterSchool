#include <iostream>
//#include <vector>

// void print_grid(int N, char grid[][]) {
//   for(int i=0; i<N; ++i) {
// 	for(int j=0; j<N; ++j)
// 	  std::cout << grid[i][j];
// 	std::cout << std::endl;
//   }
// }

// D. A floresta do Baguim
int main() {
  char vazio='.';
  char arvore='#';
  char banco='*';
  bool possivel = false;
  
  int N, K;
  std::cin >> N >> K;
  char grelha[N][N];

  for(int i=0; i<N; ++i) {
	for(int j=0; j<N; ++j)
	  std::cin >> grelha[i][j];
  }

  int lugar_banco;
  for(int i=0; i<N; ++i) {
	lugar_banco = 0;
	for(int j=0; j<N; ++j) {
	  if(grelha[i][j] == vazio)
		lugar_banco += 1;
	  else
		lugar_banco = 0;

	  if(lugar_banco >= K) {
		possivel = true;
		goto end;
	  }
	}
  }
 end:
  std::cout << int(possivel) << std::endl;
  return 0;
}
