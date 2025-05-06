#include "block.hpp"
#include <ctime>

std::time_t block::getTimeStamp() const
{
  return timeStamp;
}
void block::getTransactionData() const
{
  return;
}
void block::getPreviousBlockHash() const
{
  return;
}
void block::getCurrentBlockHash() const
{
  return;
}

void block::setTimeStamp(std::time_t t)
{
  timeStamp = t;
}
void block::setTransactionData()
{
  return;
}
void block::setPreviousBlockHash()
{
  return;
}
void block::setCurrentBlockHash()
{
  return;
}
