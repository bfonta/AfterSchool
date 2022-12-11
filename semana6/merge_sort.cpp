#include <iostream>
#include <vector>
using namespace std;

// We assume the sequences are sorted
void merge(vector<int>& seq, vector<int>& seq1, vector<int>& seq2) {
  int n = seq1.size();
  
  int is = 0, i1 = 0, i2 = 0;
  while (i1 < n || i2 < n) {
	if (i1 != n && (i2 == n || seq1[i1] <= seq2[i2])) {
	  seq[is] = seq1[i1];
	  is++;
	  i1++;
	}
	else {
	  seq[is] = seq2[i2];
	  is++;
	  i2++;
	}
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> seq(2*n), seq1(n), seq2(n);
  for (int i = 0; i < n; ++i) cin >> seq1[i];
  for (int i = 0; i < n; ++i) cin >> seq2[i];

  merge(seq, seq1, seq2);

  for (int i=0; i<2*n; ++i) cout << seq[i] << " ";
  cout << endl;

  return 0;
}
