#include "ndn-cxx/security/pib/pib-blockchain.hpp"
PibBlockchain::PibBlockchain(){
	PibBlock *genesisBlock = new PibBlock();
	PibBlockchain::pibBlockchain.push_back(genesisBlock);
	
}

void PibBlockchain::addBlock(PibBlock *pBlock){
	this->pibBlockchain.push_back(pBlock);
	this->size+=1;
	
}

/*
 *@function invalidateCerificateBlock(Certificate)
 *@use: uses pib-block.cpp function invalidate() to set version of block to 0
 */

/*void PibBlockchain::invalidateCertificateBlock(v2::Certificate cert){
	 getBlock(cert.getName())->invalidate();
}*/

/*
 *@function:getBlock(Name)
 *@use: returns a pointer to the block with the name specified
 */

/*PibBlock *PibBlockchain::getBlock(const Name name){
std::vector<PibBlock *>::iterator it, end;
// Make iterate point to begining and incerement it one by one till it reaches the end of list.
for (it = this->pibBlockchain.begin(), end=this->pibBlockchain.end(); it != end; it++){
	if((*it)->returnBlockName() == name){

	return *it; 
}
}
std::cerr << "The name of the certificate is not in the blockchain";
return *(this->pibBlockchain.begin()); //returns error and root cert if fails
}*/

/*PibBlock *PibBlockchain::getBlockByCert(v2::Certificate cert){
	std::vector<PibBlock *>::iterator it, end;
// Make iterate point to begining and incerement it one by one till it reaches the end of list.
for (it = this->pibBlockchain.begin(), end=this->pibBlockchain.end(); it != end; it++){
	if((*it)->getCertificate() == cert){

	return *it; 
}
}
std::cerr << "The name of the certificate is not in the blockchain";
return *(this->pibBlockchain.begin()); //returns error and root cert if fails
}*/


int PibBlockchain::getSize(){
	return this->size;
}
/*

void PibBlockchain::printToFile(){
  ofstream fileToWrite;
  fileToWrite.open("/home/sam/Desktop/FYP/Final/test.txt");
  //fileToWrite.close();
	std::vector<PibBlock *>::iterator it, end;
// Make iterate point to begining and incerement it one by one till it reaches the end of list.
	for (it = this->pibBlockchain.begin(), end=this->pibBlockchain.end(); it != end; it++){
		  fileToWrite << (*it)->getTesting() << " size: " << this->getSize() << std::endl;
}
fileToWrite.close();
}*/


/*  ofstream fileToWrite;
  fileToWrite.open("/home/sam/Desktop/FYP/Final/test.txt");
  fileToWrite << certChain->getSize();
  fileToWrite.close();*/