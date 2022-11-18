#include <iostream>
using namespace std;

void print_matriz(int m, int n, int (&mtrx)[100][100]) {
  cout << "YES" << "\n";
  for(int i=0; i<m; ++i) {
	for(int j=0; j<n; ++j) {
	  cout << mtrx[i][j] << " ";
	}
	cout << "\n";
  }
}

//C. OR in Matriz
int main(int argc, char** argv)
{
  int matriz[100][100];
  int m, n; cin >> m >> n;
  for(int i=0; i<m; ++i) {
	for(int j=0; j<n; ++j) {
	  cin >> matriz[i][j];	  
	}
  }

  //check if all elements are zero
  int sum=0, prow[m], pcol[n];
  for(int i=0; i<m; ++i) {
	for(int j=0; j<n; ++j) {
	  sum += matriz[i][j];	  
	}
  }
  if(sum==0) {
	print_matriz(m, n, matriz);
	return 0;
  }

  for(int i=0; i<m; ++i) {
	prow[i] = 1;
	for(int j=0; j<n; ++j) {
	  prow[i] *= matriz[i][j];	  
	}
  }
  //check if all rows have tleast one zero
  int srow=0;
  for(int i=0; i<m; ++i) {
	srow += prow[i];
  }
  if(srow==0) {
	cout << "NO\n";
	return 0;
  }

  for(int i=0; i<n; ++i) {
	pcol[i] = 1;
	for(int j=0; j<m; ++j) {
	  pcol[i] *= matriz[j][i];	  
	}
  }
  //check if all columns have tleast one zero
  int scol=0;
  for(int i=0; i<n; ++i) {
	scol += pcol[i];
  }
  if(scol==0) {
	cout << "NO\n";
	return 0;
  }

  //same row and columns
  for(int i=0; i<m; ++i) {
	for(int j=0; j<n; ++j) {
	  if(matriz[i][j]==1 and prow[i]+pcol[j]==0) {
		cout << "NO\n";
		return 0;
	  }
	}
  }
	
  int res[100][100];
  for(int i=0; i<m; ++i) {
	for(int j=0; j<n; ++j) {
	  res[i][j] = 1;
	}
  }

  for(int i=0; i<m; ++i) {
	for(int j=0; j<n; ++j) {
	  if(matriz[i][j] == 0) {
		for(int k=0; k<n; ++k) res[i][k] = 0;
		for(int k=0; k<n; ++k) res[k][j] = 0;
	  }
	}
  }
  print_matriz(m, n, res);
  return 0;
}
