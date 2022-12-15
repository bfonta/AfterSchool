#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//E. Honest Coach
int main(int argc, char** argv)
{
  int t, n, amin;
  cin >> t;
  std::vector<int> s(50);
  while(t--) {
	cin >> n;
	for(int i=0; i<n; ++i) cin >> s[i];
	sort(s.begin(), s.begin()+n);

	amin = 1e3+1;
	for(int i=1; i<n; ++i) {
	  int diff = s[i]-s[i-1];
	  if(diff==0) {
		amin = 0;
		break;
	  }
	  else if(diff<amin)
		amin = diff;
	}
	cout << amin << "\n";
  }
  return 0;
}
