#include <iostream>
using namespace std;

//D. Lecture Sleep
int main(int argc, char *argv[])
{
  int n, k; cin >> n >> k;
  int theor[n]; for(int i=0; i<n; ++i) cin >> theor[i];
  int behav[n]; for(int i=0; i<n; ++i) cin >> behav[i];

  int tabpos[n]; for(int i=0; i<n; ++i) tabpos[i]=-1;
  int tabneg[n]; for(int i=0; i<n; ++i) tabneg[i]=-1;

  int sparcial;
  int max=0, imax=-1;
  for(int i=0; i<n-k+1; ++i) 
	{
	  sparcial = 0;
	  for (int j=i; j<i+k; ++j)
		{
		  if(tabpos[j]==-1)
			tabpos[j] = theor[j] * behav[j];
		  if(tabneg[j]==-1)
			tabneg[j] = theor[j] * !behav[j];
		  sparcial += tabneg[j];
		}
	  if(sparcial>max) {
		max=sparcial;
		imax=i;
	  }
	}

  int stotal=0;
  for(int i=0; i<n; ++i) 
	{
	  if(i<imax or i>=imax+k)
		stotal += tabpos[i];
	  else
		stotal += theor[i];
	}
  
  cout << stotal << "\n";
  return 0;
}
