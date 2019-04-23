#ifndef PIB_BLOCKCHAIN_HEADER
#define PIB_BLOCKCHAIN_HEADER


//class PibBlock;

#include <iostream>
#include "ndn-cxx/security/pib/pib-block.hpp"
//using namespace ndn;
//using namespace security;
using namespace std;
class PibBlockchain : noncopyable
{
private:
	vector<PibBlock *> pibBlockchain;
	int size = 1;

public:
	PibBlockchain();
	//PibBlockchain(PibBlockchain *chain):
	//~PibBlockchain();
	void addBlock(PibBlock *block);
	int getSize();
	//void printToFile();
	//void invalidateCertificateBlock(v2::Certificate cert);
	//PibBlock *getBlock(const Name name);
	//PibBlock *getBlockByCert(v2::Certificate cert);

};

#endif //PIB_BLOCKCHAIN_HEADER