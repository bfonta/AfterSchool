#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int manhattan(int x1, int y1, int x2, int y2) {
  return abs(x1-x2)+abs(y1-y2);  
}

pair<int, int> linear_to_grid(int idx, int nrows, int ncols) {
  int x = (idx-1)%ncols + 1;
  int y = (idx-1)/ncols + 1;
  return make_pair(x,y);
}

int grid_to_linear(int i, int j, int nrows, int ncols) {
  return (j-1)*ncols + i;
}

//A. Where to sit
int main(int argc, char** argv)
{
  // for(int i=1; i<=4*5; ++i) {
  // 	pair<int,int> tmp = linear_to_grid(i, 4, 5);
  // 	std::cout << tmp.first << " " << tmp.second << std::endl;
  // 	std::cout << grid_to_linear(tmp.first, tmp.second, 4, 5) << endl;
  // }
  // std::exit(0);
  int m, n, k;
  cin >> m >> n;
  cin >> k;
  vector<int> s(k);
  for (int i=0; i<k; ++i) cin >> s[i];

  for (int i=1; i<=m; ++i) {
	for (int j=1; j<=n; ++j) {
	  pair<int,int> sxy = linear_to_grid(s[0], m, n);
	  int dist = manhattan(j, i, sxy.first, sxy.second);
	  bool flag = true;
	  for (int q=1; q<k; ++q) {
		pair<int,int> s2 = linear_to_grid(s[q], m, n);
		if(manhattan(j, i, s2.first, s2.second) != dist) {
		  flag = false;
		  continue;
		}
	  }
	  if(flag) {
		cout << grid_to_linear(j, i, m, n) << endl;
		return 0;
	  }
		
	}
  }

  cout << -1 << endl;
  return 0;
}
