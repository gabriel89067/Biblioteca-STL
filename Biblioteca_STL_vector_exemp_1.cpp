#include <iostream>
#include <vector>

int main() {

  std::vector<int> v = {7, 5, 16, 8};

  v.push_back(25);
  v.push_back(13);

  for(int n : v) {
    std::cout << n << std::endl;
  }

  return 0;
}
