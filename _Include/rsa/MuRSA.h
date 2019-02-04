////////////////////////////////////////////////////////////////////////////////
// MuRSA.h
#ifndef MU_RSA_H
#define MU_RSA_H

class CPublicRsaKey;
class CPrivateRsaKey;

class CMuRSA{
public:
	static int EncPacket(CPublicRsaKey* key, BYTE* p, int len, BYTE* outp, int& outlen, BYTE protocoltype);
	static int DecPacket(CPrivateRsaKey* key, BYTE* p, int len, BYTE* outp, int& outlen, BYTE protocoltype);
};

#endif

/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

