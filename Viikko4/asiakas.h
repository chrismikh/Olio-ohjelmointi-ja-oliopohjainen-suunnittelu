#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
using namespace std;
#include "pankkitili.h"
#include "luottotili.h"

class Asiakas
{
    public:
        Asiakas();
        Asiakas(string, double);
        string getNimi();
        void showSaldo();
        bool talletus(double);
        bool nosto(double);
        bool luotonMaksu(double);
        bool luotonNosto(double);
    private:
        string nimi;
        Pankkitili kayttotili;
        Luottotili luottotili;
};

#endif // ASIAKAS_H
