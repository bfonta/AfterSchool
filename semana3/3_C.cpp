#include <iostream>
#include <vector>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

void print_stack_ordered(stack<int>& triple) {
  const int s = triple.size();
  vector<int> vec(s);
  for(int i=0; i<s; ++i) {
	vec[i] = triple.top();
	triple.pop();
  }
  sort(vec.begin(), vec.end());
  for(auto& x : vec) {
	if(x == vec.back())
	  std::cout << x << std::endl;
	else
	  std::cout << x << " ";
  }
}

void rec(const vector<int>& vec, int idx, stack<int>& triple) {
  for(int i=idx; i<=vec.size(); ++i) 
	{
	  triple.push(idx);
	  if( (triple.size()==1 and vec[idx-1] < vec[i-1]) or
		  (triple.size()==2 and vec[idx-1] > vec[i-1])) {
		rec(vec, i, triple);
	  }
	  if (triple.size()>2)
		return;

	  triple.pop();
	}
}

//C. Three indices
int main() {
  stack<int> triple;
  vector<int> vec;
  bool found;
  int ntests, nperm;
  cin >> ntests;

  // for(int i = 1000; i>0; --i) 
  // 	{
  // 	  std::cout << i << " ";
  // 	}
  // exit(0);

  for(int i=0; i<ntests; ++i) 
	{
	  found = false;
	  vec.clear();
	  cin >> nperm;
	  vec.resize(nperm);
	  for (int j=0; j<nperm; ++j)
		cin >> vec[j];
	  
	  for(int i=1; i<=vec.size(); ++i) {
		rec(vec, i, triple);
		if(triple.size()==3) {
		  cout << "YES" << "\n";
		  found = true;
		  print_stack_ordered(triple);
		  break;
		}
	  }
	  if(!found)
		cout << "NO" << "\n";
	}
     
  return 0;
}
