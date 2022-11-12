#include <iostream>
     
using namespace std;
     
int main() {
  int N, K, s, res = 0;
  cin >> N >> K;
  int A[N];
  for (int i = 0; i < N; i++) cin >> A[i];
  if (3 * K >= N)
	for (int i = 0; i < N; i++) res += A[i];
  else
	for (int i = 0; i <= N - 3 * K; i++)
	  for (int j = i + K; j <= N - 2 * K; j++)
		for (int l = j + K; l <= N - K; l++) {
		  s = 0;
		  for (int m = i; m < i + K; m++) s += A[m];
		  for (int m = j; m < j + K; m++) s += A[m];
		  for (int m = l; m < l + K; m++) s += A[m];
		  res = max(res,s);
		}
  cout << res << endl;
  return 0;
}
