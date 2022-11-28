#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  std::vector<int> v = {1,2,3,4,4,4,4,5,5};
  int escolhido = 4;

  vector<int>::iterator lower_Bound;
  lower_Bound = lower_bound(v.begin(), v.end(), escolhido);

  int resposta = lower_Bound - v.begin();
  std::cout << resposta << std::endl;
  return 0;
}
