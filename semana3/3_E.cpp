#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int expr(int a, int i, int b, int j, int c, int k) {
  return a*i + b*j + c*k;
}
  
//E. Cut Ribbon
int main() {
  vector<int> vec(3);
  vector<int> res;
  int n, a, b, c; cin >> n >> a >> b >> c;

  if (a > c)
   swap(a, c);
  if (a > b)
	swap(a, b);
  if (b > c)
	swap(b, c);
  
  for(int i=n/a; i>=0; --i) {
	for(int j=(n-i*a)/b; j>=0; --j) {
	  for(int k=(n-i*a-j*b)/c; k>=0; --k) {
		int calc = (i*a) + (j*b) + (k*c);
		if(n == calc) {
		  res.push_back(i+j+k);
		}
		else
		  break;
	  }
	}
  }

  std::cout << *std::max_element( res.begin(), res.end() ) << std::endl;
  return 0;
}
