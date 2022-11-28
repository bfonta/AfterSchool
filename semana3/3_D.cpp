#include <iostream>
using namespace std;

//D. Vicious Keyboard
int main() {
  int contador=0;
  bool add = false;
  string input; cin >> input;
  int siz = input.size();
  
  //count how many VK pairs we originally have
  for(int i=0; i<siz-1; ++i) 
	{
	  if(input[i] == 'V' and input[i+1] == 'K')
		contador++;
	}

  //limit cases
  if(siz == 1) {
	std::cout << 0 << std::endl;
	return 0;
  }	
  else if(siz == 2 and input[0] == input[1])
	contador++;

  for(int i=0; i<siz-2; ++i)  {
	  if(!add and siz>2 and
		 ((input[i] == 'V' and input[i+1] == 'V' and input[i+2] == 'V') or
		  (input[i] == 'K' and input[i+1] == 'K' and input[i+2] == 'K'))) {
		contador++;
		add = true;
	  }
	  else if(!add and siz>2 and
			  (input[0] == 'K' and input[1] == 'K' and input[2] == 'V')) { //excepcao inicial
		contador++;
		add = true;
	  }
	  else if(!add and siz>2 and
			  (input[siz-3] == 'K' and input[siz-2] == 'V' and input[siz-1] == 'V')) { //excepcao final
		contador++;
		add = true;
	  }
  }
  
  std::cout << contador << std::endl;
  return 0;
}
