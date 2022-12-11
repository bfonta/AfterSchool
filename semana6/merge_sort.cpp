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

void merge(vector<int>& seq, int left, int mid, int right) {
  int nl = mid-left+1, nr = right-mid;
  vector<int> seql(nl), seqr(nr);
  for(int i=0; i<nl; ++i) seql[i] = seq[left+i];
  for(int i=0; i<nr; ++i) seqr[i] = seq[mid+1+i];
  
  int is = left, il = 0, ir = 0;
  while (il < nl || ir < nr) {
	if (il != nl && (ir == nr || seql[il] <= seqr[ir])) {
	  seq[is] = seql[il];
	  is++;
	  il++;
	}
	else {
	  seq[is] = seqr[ir];
	  is++;
	  ir++;
	}
  }
}

void merge_sort(vector<int>& vec,
				int const left, int const right)
{
  if (left >= right)
	return;

  auto mid = left + (right-left)/2;
  merge_sort(vec, left, mid);
  merge_sort(vec, mid+1, right);
  merge(vec, left, mid, right);
}

int main() {
  int n;
  cin >> n;
  vector<int> seq(n);
  for (int i = 0; i<n; ++i) cin >> seq[i];

  print_vector(seq);
  merge_sort(seq, 0, n-1);
  print_vector(seq);
  
  return 0;
}
