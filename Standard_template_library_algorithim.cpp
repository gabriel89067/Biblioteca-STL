#include <iostream>
#include <vector>
#include <algorithm>

int main() {

  std::vector<int> v = {23, 7, 5, 16, 8, 1, 12, 20, 10};

  for(int &n : v)
    std::cout << n << std::endl;

  int max = *std::max_element(v.begin(), v.end());
  std::cout << "Max: " << max << std::endl;

  std::cout << "Sort:" << std::endl;
  std::sort(v.begin(), v.end());
  for(int &n : v)
    std::cout << n << std::endl;

  return 0;
}
