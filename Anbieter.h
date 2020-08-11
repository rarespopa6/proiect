#pragma once
#include "Firma.h"
#include <string>
using namespace std;
class Anbieter :
    private Firma
{
private:
    string kontaktName="", firmanummer="";
public:
    void cons(const string& kn, const string& fn);
    void print();
};
