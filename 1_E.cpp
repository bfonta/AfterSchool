#include <iostream>
#include <assert.h>

void ordenar(int &a1, int&a2, int&a3) {
  while(true) {
	if(a1 <= a2 and a2 <= a3)
	  break;
	if(a2 > a3)
	  std::swap(a2, a3);

	if(a1 <= a2 and a2 <= a3)
	  break;
	if(a1 > a2)
	  std::swap(a1, a2);
  }
}

// E. Os Selos de Camarneiro
int main() {
  std::string res = "";
  int l1, l2, l3;
  std::cin >> l1 >> l2 >> l3;
  assert(l1 >= 1 and l1 <= 2000);
  assert(l2 >= 1 and l2 <= 2000);
  assert(l3 >= 1 and l3 <= 2000);

  ordenar(l1, l2, l3);
  int cat = l1*l1 + l2*l2;
  int hip = l3*l3;

  if(cat > hip)
	res = "Agudo";
  else if(cat == hip)
	res = "Retangulo";
  else
	res = "Obtuso";
  
  std::cout << res << std::endl;
  return 0;
}
