#include <iostream>
#include <vector>
using namespace std;

int linear(const vector<int> &arr, int pot) {
  const int s = arr.size();
  for(int i = 0; i<s; ++i) 
	{
	  if(pot<arr[i])
		return i;
	}
  return s;
}

int logar(const vector<int> &arr, int pot) {
  int iold = 0, itmp;
  int inew = arr.size()/2;
  while(true)
	{
	  if(pot<arr[inew])
		itmp = inew - abs(inew-iold)/2;
	  else
		itmp = inew + abs(inew-iold)/2;
	  iold = inew;
	  inew = itmp;

	  if(iold==inew) break;
	}
  return inew;
}

//A. O ataque ao Mosteiro da Batalha
int main(int argc, char *argv[])
{
  int N, Q; cin >> N >> Q;
  vector<int> alt(N), pot(Q);
  for(int i = 0; i<N; ++i) cin >> alt[i];
  for(int i = 0; i<Q; ++i) cin >> pot[i];

  for(int i = 0; i<Q; ++i) {
	cout << logar(alt, pot[i]) << endl;
  }
  
  return 0;
}
