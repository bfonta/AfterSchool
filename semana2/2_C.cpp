#include <iostream>

int guimaracci(int n) {
   if(n == 1)
      return 1;
   else if(n == 2)
      return 3;
   else
	 return guimaracci(n-1) + guimaracci(n-2);
}

// C. Os numeros de Guimaracci
int main() {
  int N;
  std::cin >> N;
  std::cout << guimaracci(N) << std::endl;
  return 0;
}
