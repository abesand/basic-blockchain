#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <string>
#include <ctime>

class block{
  private:
    std::time_t timeStamp;
    int transactionData;
    std::string previousBlockHash;
    std::string currentBlockHash;

  public:
    std::time_t getTimeStamp() const;
    int getTransactionData() const;
    std::string getPreviousBlockHash() const;
    std::string getCurrentBlockHash() const;

    void setTimeStamp(std::time_t ts);
    void setTransactionData(int td);
    void setPreviousBlockHash(std::string pBH);
    void setCurrentBlockHash(std::string cBH);
};

#endif
