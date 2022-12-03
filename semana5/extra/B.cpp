#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

//B. Letters
int main(int argc, char *argv[])
{
  ll n, m; cin >> n >> m;
  vector<ll> asum(n+1, 0);
  asum[0] = 0;
  for(ll i = 1; i<=n; ++i) {
	cin >> asum[i];
	asum[i] += asum[i-1];
  }

  ll b, it=0, im=0;
  cin >> b;
  while(it<m) {	
	if(b>asum[it] and b<=asum[it+1]) {
	  cout << it+1 << " " << b-asum[it] << '\n';
	  ++im;
	  
	  if(im>=m) break;
	  cin >> b;
	}
	else ++it;
  }
  
  return 0;
}
