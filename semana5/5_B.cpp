#include <iostream>
#include <vector>
using namespace std;

//B. Problema B
int main(int argc, char *argv[])
{
  int N, Q; cin >> N >> Q;
  vector<int> E(N), K(Q);
  vector<int> partsum(N+1, 0);
  for(int i = 0; i<N; ++i) cin >> E[i];
  for(int i = 0; i<Q; ++i) cin >> K[i];

  partsum[0] = 0;
  for(int i = 1; i<=N; ++i) {
	partsum[i] = partsum[i-1] + E[i-1];
	std::cout << partsum[i] << std::endl;
  }
  std::exit(0);
  // for(int i = 0; i<Q; ++i) {

  // 	  vector<int>::iterator lower_Bound;
  // lower_Bound = lower_bound(v.begin(), v.end(), escolhido);

  // int resposta = lower_Bound - v.begin();}
  
  return 0;
}
