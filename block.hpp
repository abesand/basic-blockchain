#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <string>
#include <crpto++> // using BLOWFISH hash

class block{
  private:
    int timeStamp;
    int transactionData;
    std::string previousBlockHash;
    std::string currentBlockHash;

    void setTimeStamp();
    void setTransactionData();
    void setPreviousBlockHash();
    void setCurrentBlockHash();

  public:
    void getTimeStamp() const;
    void getTransactionData() const;
    void getPreviousBlockHash() const;
    void getCurrentBlockHash() const;
};

#endif
