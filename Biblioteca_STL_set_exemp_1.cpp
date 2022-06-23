#include <iostream>
#include <set>

int main() {

  std::set<int> s;

  for(int i = 10; i >= 1; i--) {
    s.insert(i);
  }

  s.insert(7);

  for(int i = 2; i <= 10; i += 2) {
    s.erase(i);
  }

  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }

  return 0;
}
