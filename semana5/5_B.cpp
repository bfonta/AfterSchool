#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

//B. Problema B
int main(int argc, char *argv[])
{
  int N, Q; cin >> N >> Q;
  vector<ll> E(N), K(Q);
  vector<ll> partsum(N+1, 0);
  for(ll i = 0; i<N; ++i) cin >> E[i];
  for(ll i = 0; i<Q; ++i) cin >> K[i];

  partsum[0] = 0;
  for(ll i = 1; i<=N; ++i) {
	partsum[i] = partsum[i-1] + E[i-1];
  }

  vector<ll>::iterator lb;
  for(ll i = 0; i<Q; ++i) {
	lb = lower_bound(partsum.begin(), partsum.end(), K[i],
					 [](ll elem, ll val){return elem <= val;});
	cout << lb - partsum.begin() - 1 << " ";
  }
  cout << endl;
  return 0;
}
