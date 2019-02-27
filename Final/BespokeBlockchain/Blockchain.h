#include <vector>
#include <Block.cpp>
public class Blockchain{
	public:
		vector<Block> Blockchain;
		Blockchain();
		void addBlock(TransData data);
		void isChainValid();		

	private:
	Block createGenesisBlock();
};

