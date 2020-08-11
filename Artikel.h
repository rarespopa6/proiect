#pragma once
#include <string>
#include <iostream>
using namespace std;

class Artikel
{
private:
	string name = "";
	int nummer = 00000000;
	string Anbieterr="";
	bool rezeptpflichtig = 1;
	bool drog_chemikalie = 1;
public:
	void cons(const string& nam, const int& num, const string& anb, const bool& rp, const bool& dg);
	void print();
};
