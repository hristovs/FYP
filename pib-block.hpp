
#ifndef PIB_BLOCK_HEADER
#define PIB_BLOCK_HEADER
//#include "ndn-cxx/security/security-common.hpp"


//#include "ndn-cxx/encoding/buffer-stream.hpp"
#include "ndn-cxx/security/pib/identity.hpp"
//#include "ndn-cxx/security/transform.hpp"
//#include "ndn-cxx/security/v2/additional-description.hpp"
//#include "ndn-cxx/util/io.hpp"

//#include <boost/tokenizer.hpp>

using namespace ndn;
using namespace security;
using namespace pib;
class PibBlock{
private:
	int version;
	bool isGenesis;
	int nonce; 	
	std::string certName;
public:
	PibBlock();
	PibBlock(std::string certstr);
	//PibBlock(Identity& ident);
	~PibBlock(){};
	void invalidate();
	//std::string getCertificate();
	//bool isValid();
	//Name returnBlockName();
	//void printCertificate();
};

#endif //PIB_BLOCK_HEADER