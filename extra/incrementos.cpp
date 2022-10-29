#include <iostream>

// ++i vs i++
int main() {
 int i = 1;
 int j = ++i; //pre-increment, preferred
 std::cout << i << " " << j << std::endl;

 //could be slower in old compilers due to extra old value that must be saved
 i = 1;
 j = i++; //post-increment
 std::cout << i << " " << j << std::endl;

 /*Note: there might be a significant difference in C++ (not C) if the operator++ was defined
   for a custom type and the temporary is large*/
}
