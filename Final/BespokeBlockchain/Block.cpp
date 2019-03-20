#include <Blockchain.cpp>
#include <iostream>
#include "ctime.h"
#include "Block.h"
#include <vector>
#include <TransData.cpp>

using namespace std;

Block::Block(int index, int version, string namedata,string publicKey, string signature, size_t prevHash){
index=idx;
version=vers;
ndndata=namedata;
pbk=publicKey;
previousHash=previousHash;
blockHash = generateHash();
}

size_t Block::generateHash(){
	hash<string> hash1;
	hash<size_t> hash2;
	hash<size_t> finalhash;
    // creating string of transaction data
    std::string toHashS = std::to_string(data.amount) + data.receiverKey + data.senderKey + std::to_string(data.timestamp);
    
    // 2 hashes to combine
    std::hash<std::string> tDataHash; // hashes transaction data string
    std::hash<std::string> prevHash; // re-hashes previous hash (for combination)
    
    // combine hashes and get size_t for block hash
    return tDataHash(toHashS) ^ (prevHash(std::to_string(previousHash)) << 1);
}



size_t Block::getHash(){
	return blockHash;
}


size_t Block::getPrevHash(){
	return prevHash;
}

bool Block::isHashValid(){
	return generateHash() == blockHash;
}
