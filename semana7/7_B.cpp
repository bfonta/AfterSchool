#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//B. Racing Horses
int main(int argc, char** argv)
{
  int N;
  cin >> N;
  std::vector<int> s(N);
  for(int i=0; i<N; ++i) cin >> s[i];

  sort(s.begin(), s.end());
  int ans = s[1] - s[0];
  for(int i=2; i<N; i++)
	ans = min(ans, s[i] - s[i-1]);
  cout << ans << '\n';
  return 0;
}
