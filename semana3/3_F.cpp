#include <iostream>
#include <vector>
#define ll long long
using namespace std;


ll sum(ll idx, ll K, const vector<ll>& a) {
  ll res=0;
  for(ll w=0; w<K; ++w)
	res += a[idx+w];
  return res;
}

//E. Regar as plantas
int main() {
  ll N, K; cin >> N >> K;
  vector<ll> a(N);
  for (ll i = 0; i < N; ++i)
	cin >> a[i];
  
  ll res=0, max=3;
  ll sumi=0, sumj=0, sumk=0;
  for(int bigKi=K; bigKi>1; --bigKi) {
	for(int bigKj=K; bigKj>1; --bigKj) {
	  for(int bigKk=K; bigKk>1; --bigKk) {
		if(bigKi+bigKj+bigKk > N) break;
		
		//1st window
		for(ll i=0; i<N-bigKi; ++i) {
		  sumi = sum(i, bigKi, a);
		  res += sumi;
		  //2nd window
		  for(ll j=i+bigKi; j<i+bigKi+bigKj; ++j) {
			sumj = sum(j, bigKj, a);
			res += sumj;
			//3rd window
			for(ll k=j+bigKj; k<N-bigKk; ++k) {
			  sumk = sum(k, bigKk, a);
			  if(res+sumk > max)
				max = res+sumk;
			}
			res -= sumj;
		  }
		  res -= sumi;
		}
	  }
	}
  }
  std::cout << max << std::endl;
  return 0;
}
