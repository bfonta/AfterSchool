#include <iostream>
#include <stack>
using namespace std;

int to_digit(char x) { return (int)x - '0'; }

//B. Sequencia de parenteses
int main() {
  string in;
  cin >> in;

  stack<char> pilha;
  for(int i=0; i<in.size(); ++i) 
	{
	  if(pilha.empty() and in[i] == ')') {
		printf("0\n");
		return 0;
	  }

	  if(in[i]=='(')
		pilha.push(in[i]);
	  else
		pilha.pop();
	}

  printf("%d\n", pilha.empty());
  
  return 0;
}
