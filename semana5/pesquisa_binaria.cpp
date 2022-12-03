#include <iostream>
#include <vector>
using namespace std;

int logar(const vector<int>& v, int val) {
  int mid;
  int low=0, high=v.size()-1;
  while(low<=high) {
    mid = (low + high)/2;
	if (val == v[mid])
	  return mid;
	else if (val > v[mid])
	  low = mid + 1;
	else
	  high = mid - 1;
	cout << mid << " " << low << " " << high << endl;
  }
  return -1;
}

int main()
{
  vector<int> vec = {{10, 22, 37, 55, 92, 118}};
  int valor = 10;
  int res = logar(vec, valor);
  if(res != -1) cout<<"Encontrei na posicao " << res << "." << endl;
  else cout << "Nao encontrei." << endl;
  return 0;
}
