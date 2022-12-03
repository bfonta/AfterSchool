#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

//A. Sushi for Two
int main(int argc, char *argv[])
{
  int length = 2;
  int n; cin >> n;
  vector<int> t(n);
  for(int i = 0; i<n; ++i) cin >> t[i];

  int tmp=0, max=1;
  int dist1=1, dist2=1;
  int cur = t[0];
  for(int i = 1; i<n; ++i) {
	if(t[i] != cur) {
	  dist1 = dist2;
	  dist2 = i - tmp;
	  if(min(dist1,dist2) > max) max = min(dist1,dist2);
	  //std::cout << "--- " << max << " " << i << " " << tmp << std::endl;
	  tmp = i;
	  cur = t[i];
	}
	if(i==n-1) {
	  dist1 = dist2;
	  dist2 = i - tmp + 1;
	  if(min(dist1,dist2) > max) max = min(dist1,dist2);
	}
  }
  std::cout << 2*max << std::endl;
  return 0;
}
