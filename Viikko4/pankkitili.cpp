#include "pankkitili.h"
#include <iostream>
using namespace std;

Pankkitili::Pankkitili()
{

}

Pankkitili::Pankkitili(string om)
{
    omistaja = om;
    cout << "Pankkitili luotu " << omistaja << ":lle" << endl;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double sum)
{
    if (sum < 0)
    {
        return false;
    }
    saldo += sum;
    //cout << "Pankkitili: talletus " << sum << " tehty" << endl;
    return true;
}

bool Pankkitili::withdraw(double sum)
{
    if ((sum < 0) || ((saldo - sum) < 0))
    {
        return false;
    }
    saldo -= sum;
    //cout << "Pankkitili: nosto " << sum << " tehty" << endl;
    return true;
}
