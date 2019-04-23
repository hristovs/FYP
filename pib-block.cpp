
#include "ndn-cxx/security/pib/pib-block.hpp"
#include <iostream>
using namespace ndn;
using namespace security;
using namespace pib;


PibBlock::PibBlock(){
    nonce = 0;
	isGenesis=true;
	version=1;
}
/*
 *@function:PibBlock(Certificate)
 *@use:call with a certificate as a parameter to make block
 */

PibBlock::PibBlock(std::string certstr){
	certName=certstr;
    nonce = 0;
	isGenesis=false;
	version=1;
}

// PibBlock::PibBlock(Identity& identityName){
// 	certificate = identityName.getCertificate();
// 	isGenesis=false;
// 	version=1;
// }
/*
 *@function:invalidate()
 *@use: call on block to invalidate i.e. make version 0
 */
void PibBlock::invalidate(){
	this->version = 0; // make invalid
}

/*
 *@function:getCertificate()
 *@use: returns the block's certificate PibBlock.getCertificate();
 */
/*v2::Certificate PibBlock::getCertificate(){
	return this->certificate;
}
*/
/*
 *@function:isValid
 *@use: call on pointed to block to see if version = 1 or 0
 */
/*
bool PibBlock::isValid(){
	return this->version;
}
*/
/*
 *@function returnBlockName()
 *@use: returns the private name of a cert in a block
 */
/*
Name PibBlock::returnBlockName(){
	return this->certName;
}
*/

/*
 *@function:printCertificate()
 *@use: prints the cert of the current block to the cout stream
 */


/*void PibBlock::printCertificate(){
	std::cout << this->certificate << std::endl;
}*/