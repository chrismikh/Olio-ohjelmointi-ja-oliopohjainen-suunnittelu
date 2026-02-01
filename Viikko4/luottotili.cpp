#include "luottotili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili()
{

}

Luottotili::Luottotili(string om, double lr) : Pankkitili(om)
{
    luottoraja = lr;
    saldo = lr;

    cout << "Luottotili luotu " << om << ":lle, luottoraja " << lr << endl;
}

bool Luottotili::deposit (double sum)
{
    if (sum < 0 || ((sum + saldo) > 0))
    {
        return false;
    }
    saldo += sum;
    return true;
}

bool Luottotili::withdraw (double sum)
{
    if (sum <= 0 || sum > saldo)
    {
        return false;
    }
    saldo -= sum;
    cout << "Luottotili: nosto " << sum << " tehty, luottoa jaljella " << saldo << endl;
    return true;
}
