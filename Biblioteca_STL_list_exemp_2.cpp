#include <iostream>
#include <list>

struct TAD {
  int x;
};

int main() {

  std::list<TAD> lista_ref;
  std::list<TAD*> lista_ptr;

  TAD t1;
  t1.x = 10;
  lista_ref.push_back(t1);

  TAD* t2 = new TAD();
  t2->x = 20;
  lista_ptr.push_back(t2);

  t1.x = 99;
  t2->x = 99;

  std::cout << lista_ref.front().x << std::endl;
  std::cout << lista_ptr.front()->x << std::endl;

  return 0;
}
