#include <iostream>
#include <vector>
using namespace std;

// BigO notation: O(n^2 k^2) so O(10^6), so brute force works
// where n is the number of strings and 'k' the length of each

//A. Juggling Letters
int main(int argc, char** argv)
{
  int t; cin >> t;
  int n;
  const int nlet = 26;
  int counts[nlet];
  bool flag;
  
  for(int it = 0; it<t; ++it) {
	for(int i=0; i<nlet; ++i)
	  counts[i] = 0;
	
	cin >> n;
	cin.ignore(1, '\n');
	
	vector<char> vec;
	for(int k=0; k<n; ++k) {
	  char tmp;
	  while(cin.get(tmp)) {
		if(tmp=='\n') break;
		vec.push_back(tmp);
	  }
	}

	if(vec.size()%n!=0) {
	  cout << "no\n";
	  continue;
	}
	
	int linesize = vec.size()/n;

	for(int i=0; i<vec.size(); ++i) {
	  counts[(int)vec[i]-97] += 1;
	}

	flag = true;
	for(int i=0; i<nlet; ++i) {
	  if(counts[i]%n!=0)	{
		cout << "no\n";
		flag = false;
		break;
	  }
	}

	if(flag)
	  cout << "yes\n";
  }
  return 0;
}
