#pragma once
#include <string>
using namespace std;
class Partei
{
private:
	string na="", str="", ort="", plz="";
public:
	Partei() = default;
	Partei(const string& n, string& st, string& ot, string& pz)
	{
		na = n;
		str = st;
		ort = ot;
		plz = pz;
	}
	string getNa()
	{
		return na;
	}
	string getSt()
	{
		return str;
	}
	string getOt()
	{
		return ort;
	}
	string getPz()
	{
		return plz;
	}

};
