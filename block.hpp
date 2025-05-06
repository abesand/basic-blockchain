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
    void getTransactionData() const;
    void getPreviousBlockHash() const;
    void getCurrentBlockHash() const;

    void setTimeStamp(std::time_t t);
    void setTransactionData();
    void setPreviousBlockHash();
    void setCurrentBlockHash();
};

#endif
