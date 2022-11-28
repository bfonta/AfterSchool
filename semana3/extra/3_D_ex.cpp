#include <iostream>
#include<cmath>
using namespace std;

//D. Lucky Sum of Digits
int main(int argc, char** argv)
{
  int n; cin >> n;
  if(n%4==0) {
	for(int i=0; i<n/4; ++i)
	  cout << "4";
  }
  if(n%7==0) {
	for(int i=0; i<n/7; ++i)
	  cout << "7";
  }
  if(n%4==0 or n%7==0)
	cout << "\n";


  int sum=0;
  int ndigits = n/7 + 1;
  int digits[ndigits];
  for(int i=0; i<ndigits; ++i)
	digits[i] = 4;
	
  for(int i=0; i<(int)pow(2,ndigits); ++i) {
	for(int j=0; j<ndigits; ++j) {
	  if(i%(int)pow(2,j)==0 and j!=0) {
		if(digits[j]==4) digits[j]==7;
		else digits[j]==4;
	  }
	  sum += digits[j];
	}
  }
  std::cout << sum << std::endl;
  return 0;
}
