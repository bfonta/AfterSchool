#include <iostream>
using namespace std;

int main(){
  int T,n;
  cin >> T;
  while(T--){
	cin >> n;
        
	int pi,pj,p,i=1,j=0,k=0,f=1;
        
	cin >> pi;
	for (int y=2; y<=n; y++){
	  cin >> p;
	  if (f==1){
		if (pi<p){
		  j = y;
		  pj = p;
		  f = 2;
		}
		else{
		  i = y;
		  pi = p;
		}
	  }
	  else if (f==2){
		if (pj>p){
		  k = y;
		  f = 3;
		}
		else{
		  j = y;
		  pj = p;
		}
	  }
	}
	if (f == 3){
	  cout << "YES" << endl;
	  cout << i << " " << j << " " << k << endl;
	}
	else
	  cout << "NO" << endl;
  }
  return 0;
}
