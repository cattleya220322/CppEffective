#include "Empty.h"
#include <iostream>
#include <cstdio>


namespace Item05 {

  Empty::Empty() {
    std::cout << "Constructor" << std::endl;
  }

  Empty::~Empty() {
    std::cout << "Destructor" << std::endl;
  }

  Empty::Empty(Empty const& rhs) {
    std::cout << "Copy Constructor" << std::endl;
  }

  Empty& Empty::operator=(Empty const& rhs) {
    std::cout << "Copy Assignment Operator" << std::endl;
    return *this;
  }

}
