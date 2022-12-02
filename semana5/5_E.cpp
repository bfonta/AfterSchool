#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

//E. Letters
int main(int argc, char *argv[])
{
  ll n, m; cin >> n >> m;
  vector<ll> a(n);
  vector<ll> asum(n+1, 0);
  for(int i = 0; i<n; ++i) cin >> a[i];
  asum[0] = 0;
  for(ll i = 1; i<=n; ++i) {
	asum[i] = asum[i-1] + a[i-1];
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
