#pragma once
#include "Partei.h"
#include "Firma.h"
class Arzt :
    private Partei, private Firma
{
private:
    int lizenznummer = 0;
public:
     void setLn(int& ln)
     {
         lizenznummer = ln;
     }
     int getLn()
     {
         return lizenznummer;
     }
};
