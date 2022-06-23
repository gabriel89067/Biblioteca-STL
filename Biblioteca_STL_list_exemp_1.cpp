#include <iostream>
#include <list>

int main() {
  std::list<int> l = {7, 5, 16, 8};

  // Add an integer to the front of the list
  l.push_front(25);
  // Add an integer to the back of the list
  l.push_back(13);

  for (std::list<int>::iterator it=l.begin(); it != l.end(); ++it) {
    std::cout << *it << std::endl;
  }

  return 0;
}
