#include<iostream>
#define ll long long

int to_digit(char x) { return (int)x - '0'; }

//A. New Skateboard
int main() {
  std::string input;
  std::cin >> input;
  ll N = input.length();
	
  //count substrings that are multiples of 4
  ll contador=0, digit1=-1, digit2=-1;
  for(int j=N-1; j>=0; --j) {
	digit1 = to_digit(input[j]);
	if(digit1%4 == 0)
	  contador++;

	if(j>0) {
	  digit2 = to_digit(input[j-1]);
	  if( (10*digit2 + digit1)%4 == 0)
		contador += j;
	}
  }
	
  printf("%lld\n", contador);
  
  return 0;
}
