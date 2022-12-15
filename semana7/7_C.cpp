#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//C. New Colony
int main(int argc, char** argv)
{
  int t, n, k;
  cin >> t;
  int index;
  std::vector<int> h(100);
  while(t--) {
	cin >> n >> k;
	for(int i=0; i<n; ++i) cin >> h[i];

	index = -1;
	for(int i=0; i<k; ++i) {
	  for(int j=0; j<n-1; ++j) {
		if(h[j+1]>h[j]) {
		  ++h[j];
		  if(i==k-1) index=j+1;
		  break;
		}
		//without this else if block it does not pass the CodeForces check
		else if(j==n-2 and h[j+1]<=h[j]) {
		  goto end;
		  break;
		}
	  }
	}
  end:
	cout << index << endl;
  }
  
  return 0;
}
