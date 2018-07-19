// 'Hello World!' program 
 
#include <iostream>
#include "buffer.h"


int main()
{
  buffer t(100);

  std::cout << "Starting" << std::endl;
  t.put('h');


  return 0;
}