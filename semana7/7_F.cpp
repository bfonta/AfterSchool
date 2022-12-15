#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
  ll n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    {
	  cin >> a[i];
    }
  ll psum[n + 1]; //partial sum array
  psum[0] = 0;
  for (int i = 1; i <= n; i++)
    {
	  psum[i] = psum[i - 1] + a[i - 1];
    }

  // for (int i = 0; i <= n; i++) cout << psum[i] << " ";
  // cout << "\n";

  //psum -> psum (mod n)
  for (int i = 0; i <= n; i++)
    {
	  psum[i] %= n;
	  if (psum[i] < 0)
		psum[i] += n;
    }

  // for (int i = 0; i <= n; i++) cout << psum[i] << " ";
  // cout << "\n";

  ll occur[n]; //occur[i] = occurences of i in psum array
  for(int i=0; i<n; ++i) occur[i] = 0;
  
  for (int i = 0; i <= n; i++)
    {
	  occur[psum[i]]++;
    }

  // for (int i = 0; i < n; i++) cout << occur[i] << " ";
  // cout << "\n";

  ll ans = 0;
  for (int i = 0; i < n; i++)
    {
	  ll k = occur[i];
	  ans += k * (k - 1) / 2;
    }

  cout << ans << endl;

  return 0;
}
