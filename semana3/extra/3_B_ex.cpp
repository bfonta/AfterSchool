#include <iostream>
using namespace std;

//B. Fix You
int main(int argc, char** argv)
{
  char matriz[100][100];
  int t; cin >> t;
  int n, m;
  int count;
  for(int it=0; it<t; ++it) {
	cin >> n >> m;
	for(int i=0; i<n; ++i) {
	  for(int j=0; j<m; ++j) {
		cin >> matriz[i][j];
	  }
	}

	count = 0;
	for(int i=0; i<n-1; ++i) {
	  if(matriz[i][m-1]!='D')
		count += 1;
	}
	for(int i=0; i<m-1; ++i) {
	  if(matriz[n-1][i]!='R')
		count += 1;
	}
	std::cout << count << std::endl;
  }
  
  return 0;
}
