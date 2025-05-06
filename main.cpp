#include <iostream>
#include "block.hpp"
#include "blockchain.hpp"
#include <openssl/blowfish.h>
#include <ctime>

int main(){
  std::cout << "Main Program" << std::endl;
  block b;
  time_t t = std::time(nullptr);
  b.setTimeStamp(t);
  std::cout << b.getTimeStamp() << std::endl;
  return 0;
}
