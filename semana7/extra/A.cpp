#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
//A. Save More Mice
int main(int argc, char** argv)
{
  int t;
  int n, k, tmp, sum;
  cin >> t;
  while(t--) {
	cin >> n >> k;
	vector<int> x(k);
	for (int i=0; i<k; ++i) {
	  cin >> tmp;
	  x[i] = n - tmp;
	}
	sort(x.begin(), x.begin()+k);

	sum = 0;
	for (int i=0; i<k; ++i) {
	  sum += x[i];
	  if(sum >= n) {
		cout << i << endl;
		break;
	  }
	  if(i==k-1) {
		cout << k << endl;
		break;
	  }
	}
  }

  return 0;
}
