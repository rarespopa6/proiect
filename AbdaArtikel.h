#pragma once
#include "Artikel.h"
class AbdaArtikel :
    private Artikel
{
private:
    string Warrengruppe = "";
    string Indikationsgruppe = "";
public: 
    void constt(const string& wg, const string& ig);
     void print();
};
