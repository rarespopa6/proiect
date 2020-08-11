#pragma once
#include <string>
using namespace std;
class Firma
{
private:
	int nummr=0;
	int bankkontnummer=0;
public:
	/*void setNr(const int& nrr)
	{
		nummr = nrr;
	}
	void setBkn(const int& bn)
	{
		bankkontnummer = bn;
	}*/
	Firma() = default;
	Firma(const int& nrr, const int& bn)
	{
		nummr = nrr;
		bankkontnummer = bn;
	}
	int getNr()
	{
		return nummr;
	}
	int getBkn()
	{
		return bankkontnummer;
	}

};
