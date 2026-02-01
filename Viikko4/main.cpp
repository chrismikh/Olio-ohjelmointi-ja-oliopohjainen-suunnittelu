#include <iostream>
#include "luottotili.h"
#include "pankkitili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas a1("Aapeli", 1000);
    a1.showSaldo();
    cout << endl;

    a1.talletus(250);
    a1.luotonNosto(150);
    a1.showSaldo();
    cout << endl;

    Asiakas a2("Bertta", 1000);
    a2.showSaldo();
    cout << endl;

    cout << a1.getNimi() << endl;
    a1.showSaldo();
    a1.tiliSiirto(50, a2);
    cout << endl;
    cout << a2.getNimi() << endl;
    a2.showSaldo();
    return 0;
}
