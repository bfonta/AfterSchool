#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int logar(const vector<ll> &arr, ll val) {
  ll iold=0, dist=-1, itmp;
  ll inew = arr.size()/2+1;
  while(true)
	{
	  if(inew<1) inew=1;
	  if(inew>arr.size()) inew=arr.size();
	  
	  if(iold==inew or val==arr[inew-1]) break;
	  
	  dist = abs(inew-iold);
	  if(dist%2==1 and dist>2)
		++dist;
	  dist /= 2;
	  //cout << dist << " " << iold << " " << inew << endl;
	  if(val<arr[inew-1])
		itmp = inew - max<ll>(dist,1);
	  else
		itmp = inew + dist;
	  
	  iold = inew;
	  inew = itmp;
	}
  return inew;
}

//A. O ataque ao Mosteiro da Batalha
int main(int argc, char *argv[])
{
  ll N, Q; cin >> N >> Q;
  vector<ll> alt(N), pot(Q);
  for(ll i = 0; i<N; ++i) cin >> alt[i];
  for(ll i = 0; i<Q; ++i) cin >> pot[i];

  for(ll i = 0; i<Q; ++i) {
	cout << logar(alt, pot[i]) << endl;
  }
  
  return 0;
}
