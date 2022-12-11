#include <iostream>
#include <vector>
using namespace std;

void selection_sort_up_to(int k, vector<int>& v, string mode)
{
  int N = v.size();
  int limit = k<N-1 ? k : N-1;
  for(int i=0; i<limit; ++i) {
	int imark = i;
	for(int j=i+1; j<N; ++j) {
	  if(mode=="ascendent" and v[j] < v[imark])
		imark = j;
	  else if(mode=="descendent" and v[j] > v[imark])
		imark = j;

	}
	if(imark!=i)
	  swap(v[i],v[imark]);
  }
}

//A. Two Arrays And Swaps
int main(int argc, char** argv)
{
  int t, n, k;
  cin >> t;
  for(int it=0; it<t; ++it)
	{
	  cin >> n >> k;
	  vector<int> a(n), b(n);
	  for (int i=0; i<n; ++i) cin >> a[i];
	  for (int i=0; i<n; ++i) cin >> b[i];

	  selection_sort_up_to(k, a, "ascendent");
	  selection_sort_up_to(k, b, "descendent");

	  int maximum = 0;
	  for (int i=0; i<k; ++i) {
		int max = a[i]<b[i] ? b[i] : a[i];
		maximum += max;
	  }
	  for (int i=k; i<n; ++i) maximum += a[i];
	  cout << maximum << "\n";
	}
  
  return 0;
}
