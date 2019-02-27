#include <iostream>
#include "ctime.h"
class Block{
	public:
	Block(int index, TransData d, size_t prevHash);
	size_t getHash();
	size_t getPrevHash();
	TransData data;
	bool isValid();



	private:
	int index;
	size_t blockHash;
	size_t previousHash();
	size_t generateHash();	
};
