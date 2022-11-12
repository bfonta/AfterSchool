#include <iostream>
#include <vector>
using namespace std;

//G. Dragao de Loowater
int main() {
  int t; cin >> t;
  int n, m;
  
  int moedas;
  bool fail;
  for(int it=0; it<t; ++it) 
	{
	  fail = true;
	  cin >> n >> m;
	  vector<int> d(n);
	  vector<int> a(m);
	  
	  for(int i=0; i<n; ++i)
		cin >> d[i];
	  for(int i=0; i<m; ++i)
		cin >> a[i];

	  //there need be at least as many knights as dragon heads
	  //OR
	  //if the tallest dragon is taller than the tallest knight
	  if(n>m) { // or d[n-1] > a[m-1]) {
		std::cout << -1 << std::endl;
		continue;
	  }

	  moedas=0;	  
	  //calculate prize
	  int start=0;
	  for(int idragao=0; idragao<n; ++idragao) {
		fail = true;

		for(int icav=start; icav<=m-n+idragao; ++icav) {
		  if(a[icav] >= d[idragao]) {
			moedas += a[icav];
			start = icav+1;
			fail = false;
			break;
		  }
		}

		if(fail) break;
	  }
		
	  if(fail) std::cout << -1 << std::endl;
	  else std::cout << moedas << std::endl;
	}
  return 0;
}
