#ifndef BLOCKCHAIN_HPP
#define BLOCKCHAIN_HPP

#include "block.hpp"

class blockchain{
  private:
    block genesisBlock;
    // Iterator object to iterate through blockchain?
    // some sort of way to verify with other maintainers
    // For our purposes, a maintainer will be those 
    // pcs or people actively supporting the blockchain

  public:
    // some sort of traverse function, perhaps Iterator
    // or something else, not sure
};

#endif
