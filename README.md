# FYP
NDN + Blockchain

## Installation Instructions

In order to run, install MiniNDN from their [repo](https://github.com/named-data/mini-ndn).
Clone the repository and run:
	sudo ./install.sh -a 

This will install MiniNDN with all dependecies. Then, to be able to run the NDN+Blockchain code,
go into the `ndn-cxx` library, specifically `ndn-cxx/ndn-cxx/security/pib/` and copy the code in this repo.
Following this, remove the `ndn-cxx/bin` directory and recompile using:
	```sudo ./waf configure 
	sudo ./waf 
	sudo ./waf install
	```

After this step is completed, run the emulator:
	```sudo minindn --nlsr-security
	```
This will run the emulator with NLSR security enabled which is just one of many
security schemes that can be implemented. That one is the default one.


Adding these before net.start() is important as node "root" would then be assigned an IP automatically.
Re-install Mini-NDN by issuing the following command in the mini-ndn folder:

    sudo ./install.sh -i

