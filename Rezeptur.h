#pragma once
#include "Artikel.h"
#include "AbdaArtikel.h"
#include <list>

class Rezeptur :
    private Artikel,public AbdaArtikel
{
public:
    int menge=0;
    int n;
    //string wrg[100], indg[100];
    enum typ { Pasten, Pillen, Pulver };
    string Stoffliste[100];
};
