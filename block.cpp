#include "block.hpp"

class block{
  private:
    int timeStamp;
    int transactionData;
    std::string previousBlockHash;
    std::string currentBlockHash;

    void setTimeStamp()
    void setTransactionData()
    void setPreviousBlockHash()
    void setCurrentBlockHash()

  public:
    void getTimeStamp() const;
    void getTransactionData() const;
    void getPreviousBlockHash() const;
    void getCurrentBlockHash() const;
};
