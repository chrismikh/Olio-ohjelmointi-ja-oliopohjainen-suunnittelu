#include <iostream>
#include "luottotili.h"
#include "pankkitili.h"

using namespace std;

int main()
{
    Pankkitili pt1;
    Pankkitili pt2("Pete");
    Luottotili lt1;
    Luottotili lt2("Make", 500);
    pt2.deposit(10000);
    pt2.withdraw(500);
    double luettusaldo = pt2.getBalace();
    cout << "Peten luettu saldo: " << luettusaldo << endl;
    lt2.withdraw(300);
    lt2.deposit(150);
    luettusaldo = lt2.getBalace();
    cout << "Maken luettu saldo: " << luettusaldo << endl;
    return 0;
}
