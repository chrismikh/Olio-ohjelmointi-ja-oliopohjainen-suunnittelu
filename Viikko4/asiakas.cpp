#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas()
{
    cout << "Asiakas: olen defaultkonstrukstorissa" << endl;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    cout << "Asiakas: olen parametrikonstrukstorissa" << endl;
    nimi = name;
}

bool Asiakas::tilisiirto(double sum, Asiakas& kohde);
{

}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo: " << kayttotili.getBalace() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalace() << endl;
}

bool Asiakas::talletus(double sum)
{
    kayttotili.deposit(sum);
}

bool Asiakas::nosto(double sum)
{
    kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
    luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    luottotili.withdraw(sum);
}
