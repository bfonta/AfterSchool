#include <iostream>
#include <algorithm>
using namespace std;

void soma_parcial(int N, int* vec1, int* vec2) {
  vec1[0] = 0;
  for(int i=1; i<=N; ++i)
	vec1[i] = vec1[i-1] + vec2[i-1];
}

//C. Maximum Subarray Sum
int main(int argc, char *argv[])
{
  int n; cin >> n;
  int arr[n];
  for(int i=0; i<n; ++i) cin >> arr[i];

  int soma[n+1];
  soma_parcial(n, soma, arr);

  int max=-10e6, min=10e6;
  int imax, imin;
  for(int i=0; i<=n; ++i) {
	if(soma[i]>max) {
	  max = soma[i];
	  imax = i;
	}
	if(soma[i]<min) {
	  min = soma[i];
	  imin = i;
	}
  }

  int left_min=10e6, right_max=-10e6;
  for(int i=0; i<=n; ++i)
	{
	  if(i<=imax and left_min > soma[i])
		left_min = soma[i];
	  if(i>=imin and right_max < soma[i])
		right_max = soma[i];
	}
    std::cout << std::max(max-left_min,right_max-min) << std::endl;
  
  return 0;
}
