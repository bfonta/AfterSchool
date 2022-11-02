#include<iostream>


int to_digit(char x) { return (int)x - '0'; }

//A. New Skateboard
int main() {
  //read input array
  int Ntot = 3e5;
  char input[Ntot];
  scanf("%s", input);

  //get input array size
  int N=0;
  for(int i=0; i<Ntot; ++i) {
	if(input[i]=='\0') {
	  N=i;
	  break;
	}
  }

  //count substrings that are multiples of 4
  long long contador=0;
  for(int j=N-1; j>=0; --j) {
	long long digit1 = to_digit(input[j]);
	long long digit2 = -1;
	if(digit1%4 == 0)
	  contador += 1;

	if(j>0) {
	  digit2 = to_digit(input[j-1]);
	  if( (10*digit2 + digit1)%4 == 0)
		contador += j;
	}
  }
	
  printf("%lld\n", contador);
  
  return 0;
}
