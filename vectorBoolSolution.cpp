#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Inefficient approach
  std::vector<bool> vecBool(1000000);
  // Efficient approach
  std::bitset<1000000> bitsetBool;
  
  // ... rest of the code ...
  return 0;
}