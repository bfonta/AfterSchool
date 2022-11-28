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
  int iold = 1, itmp, extra;
  int inew = arr.size()/2;
  while(true)
	{
	  if(iold==inew) break;
	  
	  //extra = abs(inew-iold)==1 ? 1 : 0;
	  extra = 0;
	  if(pot<arr[inew-1])
		itmp = inew - abs(inew-iold)/2 - extra;
	  else
		itmp = inew + abs(inew-iold)/2 + extra + 1;
	  //std::cout << "--- " << inew << " " << iold << " " << itmp << std::endl;
	  iold = inew;
	  inew = itmp;
	}
  return inew-1;
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
