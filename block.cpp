#include "block.hpp"
#include <ctime>

std::time_t block::getTimeStamp() const
{
  return timeStamp;
}
int block::getTransactionData() const
{
  return transactionData;
}
std::string block::getPreviousBlockHash() const
{
  return previousBlockHash;
}
std::string block::getCurrentBlockHash() const
{
  return currentBlockHash;
}

void block::setTimeStamp(std::time_t ts)
{
  timeStamp = ts;
}
void block::setTransactionData(int td)
{
  transactionData = td;
}
void block::setPreviousBlockHash(std::string pBH)
{
  previousBlockHash = pBH;
}
void block::setCurrentBlockHash(std::string cBH)
{
  currentBlockHash = cBH;
}
