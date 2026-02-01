#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas()
{
    cout << "Asiakas: olen defaultkonstrukstorissa" << endl;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    nimi = name;
    cout << "Asiakkuus luotu " << nimi << endl;
}

bool Asiakas::tiliSiirto(double summa, Asiakas &kohde)
{
    if (summa <= 0)
    {
        return false;
    }

    cout << "Pankkitili: " << nimi << " siirtaa " << summa << " " << kohde.nimi << ":lle" << endl;

    if (!kayttotili.withdraw(summa))
    {
        return false;
    }

    kohde.kayttotili.deposit(summa);

    cout << nimi << " Pankkitili: nosto " << summa << " tehty" << endl;

    cout << kohde.nimi << " Pankkitili: talletus " << summa << " tehty" << endl;

    return true;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
    return kayttotili.deposit(sum);
}

bool Asiakas::nosto(double sum)
{
    return kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
    return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    return luottotili.withdraw(sum);
}
