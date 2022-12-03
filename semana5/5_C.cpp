#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

//C. Árvore de maçãs
int main(int argc, char *argv[])
{
  int N, Q; cin >> N >> Q;
  vector<ll> alt1(N), alt2(Q);
  for(ll i = 0; i<N; ++i) cin >> alt1[i];
  for(ll i = 0; i<Q; ++i) cin >> alt2[i];

  vector<ll>::iterator ub;
  for(ll i = 0; i<Q; ++i) {
	ub = upper_bound(alt1.begin(), alt1.end(), alt2[i],
					 [](ll elem, ll val){return elem <= val;});
	cout << ub - alt1.begin() + 1 << endl;
  }
  return 0;
}
