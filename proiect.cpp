#include "Artikel.h"
#include "AbdaArtikel.h"
#include "Partei.h"
#include "Firma.h"
#include "Anbieter.h"
#include "Person.h"
#include "Arzt.h"
#include <iostream>
#include <fstream>
#include <typeinfo>

using namespace std;

void Artikel::cons(const string& nam, const int& num, const string& anb, const bool& rp, const bool& dg) {
	name = nam;
	nummer = num;
	Anbieterr = anb;
	rezeptpflichtig = rp;
	drog_chemikalie = dg;
}
void Artikel::print() {
	cout << name << " " << nummer << " " << Anbieterr << " " << rezeptpflichtig << " " << drog_chemikalie;
}
void AbdaArtikel::constt(const string& wg, const string& ig)
{
	Warrengruppe = wg;
	Indikationsgruppe = ig;
}
void AbdaArtikel::print()
{
	cout << Warrengruppe << " " << Indikationsgruppe;
}

void Anbieter::cons(const string& kn, const string& fn)
{
	kontaktName = kn;
	firmanummer = fn;
}
void Anbieter::print()
{
	cout << kontaktName << " " << firmanummer;
}

int main()
{
	ifstream ArtikelFile("artikel.txt");
    Artikel myArtikel;
	string name, anb;
	int numm;
	bool rez_p, drog_c;
	if (!ArtikelFile)
		cout << "Error opening file - Artikel";
	else
	{
		ArtikelFile >> name >> numm >> anb >> rez_p >> drog_c;
		if (typeid(name) != typeid(string) || typeid(numm) != typeid(int) || typeid(anb) != typeid(string) || typeid(rez_p) != typeid(bool) || typeid(drog_c) != typeid(bool))
			cout << "Error";
		else
		{
			myArtikel.cons(name, numm, anb, rez_p, drog_c);
			myArtikel.print();
		}
	}
	cout << endl;
	
	ifstream AbdaArtikelFile("abdaartikel.txt");
	AbdaArtikel myAbdaArtikel;
	string warg, indg;
	if (!AbdaArtikelFile)
		cout << "Error opening file - AbdaArtikel";
	else
	{
		AbdaArtikelFile >> warg >> indg;
		if (typeid(warg) != typeid(string) || typeid(indg) != typeid(string))
			cout << "Error";
		else
		{
			myAbdaArtikel.constt(warg, indg);
			myAbdaArtikel.print();
		}
	}
	cout << endl;

	ifstream ParteiFile("partei.txt");
	string na, str, ort, plz;
	if (!ParteiFile)
		cout << "Error opening file - Partei";
	else
	{
		if (typeid(na) != typeid(string) || typeid(str) != typeid(string) || typeid(ort) != typeid(string) || typeid(name) != typeid(plz))
			cout << "Error";
		else
		{
			ParteiFile >> na >> str >> ort >> plz;
			Partei myPartei(na, str, ort, plz);
			cout << myPartei.getNa() << " " << myPartei.getSt() << " " << myPartei.getOt() << " " << myPartei.getPz();
		}
	}
	cout << endl;

	ifstream FirmaFile("firma.txt");
	int nummr, banknr;
	if (!FirmaFile)
		cout << "Error opening file - Firma";
	else
	{
			FirmaFile >> nummr >> banknr;
			if (typeid(nummr) != typeid(int) || typeid(banknr) != typeid(int))
				cout << "Error";
			else
			{
				Firma myFirma(nummr, banknr);
				cout << myFirma.getNr() << " " << myFirma.getBkn();
			}
	}
	cout << endl;

	ifstream AnbieterFile("anbieter.txt");
	string ktn, fnr;
	if (!AnbieterFile)
		cout << "Error opening file - Anbieter";
	else
	{
		AnbieterFile >> ktn >> fnr;
		if (typeid(ktn) != typeid(string) || typeid(fnr) != typeid(string))
			cout << "Error";
		else
		{
			Anbieter myAnbieter;
			myAnbieter.cons(ktn, fnr);
			myAnbieter.print();
		}
	}
	cout << endl;

	ifstream PersonFile("person.txt");
	string vn;
	if (!PersonFile)
		cout << "Error opening file - Person";
	else
	{
		PersonFile >> vn;
		if (typeid(vn) != typeid(string))
			cout << "Error";
		else
		{
			Person myPerson;
			myPerson.setVn(vn);
			cout << myPerson.getVn();
		}
		
	}
	cout << endl;

	ifstream ArztFile("arzt.txt");
	int ln;
	if (!ArztFile)
		cout << "Error opening file - Arzt";
	else
	{
		ArztFile >> ln;
		if (typeid(ln) != typeid(int))
			cout << "Error";
		else
		{
			Arzt myArzt;
			myArzt.setLn(ln);
			cout << myArzt.getLn();
		}
		
	}
}
