#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//D. Gamer Hemose
int main(int argc, char** argv)
{
  int t, n, H;
  vector<int> a(1e3);
  cin >> t;
  for(int it=0; it<t; ++it) {
	cin >> n >> H;
	for(int i=0; i<n; ++i) cin >> a[i];

	sort(a.begin(), a.begin()+n, greater<int>());

	int top = a[0]+a[1];
	int div = H/top;
	int rest = H%top;
	if(div==0) {
	  if(H<=a[0]) cout << 1 << "\n";
	  else cout << 2 << "\n";
	}
	else if(rest==0)
	  cout << 2*div << "\n";
	else if(rest<=a[0])
	  cout << 2*div+1 << "\n";
	else
	  cout << 2*div+2 << "\n";
  }
  return 0;
}
