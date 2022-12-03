#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_log(const vector<int> &arr, int val) {
  int iold=0, dist=-1, itmp;
  int inew = arr.size()/2+1;
  while(true)
	{
	  if(inew<1) inew=1;
	  if(inew>arr.size()) inew=arr.size();
	  
	  if(val==arr[inew-1]) return true;
	  if(iold==inew) return false;
	  
	  dist = abs(inew-iold);
	  if(dist%2==1 and dist>2)
		++dist;
	  dist /= 2;
	  //cout << dist << " " << iold << " " << inew << endl;
	  if(val<arr[inew-1])
		itmp = inew - max(dist,1);
	  else
		itmp = inew + dist;
	  
	  iold = inew;
	  inew = itmp;
	}
  return false;
}

//D. Problema D
int main(int argc, char *argv[])
{
  int N, K; cin >> N >> K;
  vector<int> bol(N), gul(N);
  for(int i = 0; i<N; ++i) cin >> bol[i];
  for(int i = 0; i<N; ++i) cin >> gul[i];

  int rest=-1, count=0;
  std::vector<int> seen;
  for(int i=0; i<N; ++i) {
	if(find(seen.begin(), seen.end(), gul[i]) != seen.end())
	  continue;
	else
	  seen.push_back(gul[i]);
	  
	rest = K - gul[i];
	//std::cout <<  "-- " << K << " " << gul[i] << " " << rest << std::endl;
	if(rest<=0) continue;
	if(find_log(bol, rest)) ++count;
  }

  std::cout << count << std::endl;
  return 0;
}
