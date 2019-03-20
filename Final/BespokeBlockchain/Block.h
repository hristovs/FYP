#include <iostream>
#include "ctime.h"
#include <ndn-cpp>
class Block{
	public:
	Block(int index, int version, string namedata, string signature, size_t prevHash);
	size_t getHash();
	size_t getPrevHash();
	bool isValidBlock();
	int getIndex();
	size_t generateHash();

	private:
	int index;
	size_t blockHash;
	size_t previousHash();
	size_t generateHash();	
	int version;
	string ndndata;
	string pbk;
	size_t previousHash;
};
