#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int>& v)
{
  for (int i=0; i<v.size(); ++i) {
    cout << v[i] << " ";
	if(i == v.size()-1)
	  cout << endl;
  }
}

void selection_sort(vector<int>& v)
{
  int N = v.size();
  for(int i=0; i<N-1; ++i) {
	int imin = i;
	for(int j=i+1; j<N; ++j) {
	  if(v[j] < v[imin])
		imin = j;
	}
	if(imin!=i)
	  swap(v[i],v[imin]);
  }
}

int main(int argc, char** argv)
{
  vector<int> vec = {{1,5,7,4,2,8,5,9,3,2}};
  print_vector(vec);
  selection_sort(vec);
  print_vector(vec);
  return 0;
}
