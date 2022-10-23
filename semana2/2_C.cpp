#include <iostream>
#include <vector>
using lli = long long int;

int guimaracci(int n) {
   if(n == 1)
      return 1;
   else if(n == 2)
      return 3;
   else
	 return guimaracci(n-1) + guimaracci(n-2);
}

lli guimaracci2(std::vector<lli>& vec, int n) {
  if(vec[n-1]!=0)
	return vec[n-1];

  if(vec[n-3]==0)
	vec[n-3] = guimaracci2(vec, n-2);
  if(vec[n-2]==0)
	vec[n-2] = guimaracci2(vec, n-1);

  return vec[n-1] = vec[n-3] + vec[n-2];
}

// C. Os numeros de Guimaracci
int main() {
  int N;
  std::cin >> N;

  std::vector<lli> vec(N, 0);
  vec[0] = 1;
  vec[1] = 3;
  std::cout << guimaracci2(vec, N) << std::endl;
  return 0;
}
