#include "luottotili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili()
{
    cout << "Olen Luottotili: defaultkonstruktorissa" <<  endl;
}

Luottotili::Luottotili(string om, double lr) : Pankkitili(om)
{
    cout << "Olen Luottotili: parametrikonstruktorissa" << endl;
    luottoraja = lr;
}

bool Luottotili::deposit (double sum)
{
    cout << "Olen Luottotili: velanmaksussa" << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Saldo jalkeen: " << sum + saldo << endl;
    if (sum < 0 || ((sum + saldo) > 0))
    {
        return false;
    }
    saldo += sum;
    return true;
}

bool Luottotili::withdraw (double sum)
{
    cout << "Olen Luottotili: velannostossa" << endl;
    cout << "Luottoraja: " << luottoraja << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Saldo jalkeen: " << sum - saldo << endl;
    if (sum < 0 || (abs(saldo) + sum) > luottoraja)
    {
        return false;
    }
    saldo -= sum;
    return true;
}
