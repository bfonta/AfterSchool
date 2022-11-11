#include <iostream>
#include <vector>
using namespace std;

int algo(int pos_init, const vector<char>& pos, const vector<int>& instr) {
  int pi = pos_init;
  int min=pos_init, max=pos_init;
  for(int i=0; i<instr.size(); ++i) 
	{
	  pi += instr[i];
	  if(pi > max)
		max = pi;
	  if(pi < min)
		min = pi;
	}
  int res = 0;
  std::cout << min << " "  << max << std::endl;
  for(int i=min; i<=max; ++i) 
	{
	  if(pos[i-1] == 'T')
		res++;
	}
  return res;
}

//Pesquisa completa iterative: Arcas de Tesouro
int main() {
  int N, B, I;
  cin >> N >> B >> I;
  vector<char> pos(N);
  for(int i = 0; i<pos.size(); ++i) 
	cin >> pos[i];
  vector<int> instr(I);
  for(int i = 0; i<I; ++i)  {
	char tmp1;
	int tmp2;
	cin >> tmp1 >> tmp2;
	instr[i] = tmp2;
	if(tmp1 == 'E')
	  instr[i] *= -1;
  }

  std::cout << algo(B, pos, instr) << std::endl;

  return 0;
}
