#include <iostream>
using namespace std;

// void soma_parcial(int N, int (&vec1)[], int (&vec2)[]) {
//   vec1[0] = 0;
//   for(int i=1; i<=N; ++i) 
// 	vec1[i] = vec1[i-1] + vec2[i-1];
// }

void soma_parcial_ptr(int N, int* vec1, int* vec2) {
  vec1[0] = 0;
  for(int i=1; i<=N; ++i) 
	vec1[i] = vec1[i-1] + vec2[i-1];
}

//B. Bakugans
int main(int argc, char *argv[])
{
  int N; cin >> N;
  int E[N]; for(int i=0; i<N; ++i) cin >> E[i];
  int F; cin >> F;
  int min[F], max[F]; for(int i=0; i<F; ++i) cin >> min[i] >> max[i];

  int soma[N+1];
  soma_parcial_ptr(N, soma, E);

  for(int i=0; i<F; ++i) 
	{
	  std::cout << soma[max[i]]-soma[min[i]-1] << "\n";
	}
  
  return 0;
}
