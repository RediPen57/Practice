#include <iostream>
#include <array>
#include "student.h"

namespace KimYeonjin2693058
{
  void printClass1Array(const class1 ca[], const int n)
  {
    for (int i = 0; i<n; ++i)
      std::cout << ca[i] << std::endl;
  }
  void parVal(class1 c) { c += class1{"1", 1}}
  void parRef(class1& r) { r +=class1{"1", 1}}
  void parPtr(class1* p) { *p += class1{"1", 1}}
  class1 retVal(class1 c) { c += class1{"1", 1}}
  class1& retRef(class1& r) { r +=class1{"1", 1}}
  class1* retPtr(class1* p) { *p += class1{"1", 1}}
}

int main()
{
  using namespace KimYeonjin2693058;
  
}
