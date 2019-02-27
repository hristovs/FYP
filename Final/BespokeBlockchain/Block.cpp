#include <Blockchain.cpp>
#include <iostream>
#include "ctime.h"
#include "Block.h"
#include <vector>
#include <TransData.cpp>

using namespace std;

Block::Block(int idx, TransData d, size_t prevHash){
index=idx;
data=d;
previousHash = prevHash;
blockHash = generateHash();
}

size_t Block::generateHash(){
	hash<string> hash1;
	hash<size_t> hash2;
	hash<size_t> finalhash;

	string toHash = toString(data.amount) + data.receiverKey + data.senderKey + toString(data.timestamp);
