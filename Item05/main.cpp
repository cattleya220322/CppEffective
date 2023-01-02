#include "Empty.h"

#include <iostream>
#include <cstdio>


int main() {

  using std::cout;
  using std::endl;

  // Item00 main.cpp

  cout << "Item05" << endl;

  Item05::Empty e1;

  Item05::Empty e2(e1);

  e2 = e1;

}
