#include "seuraaja.h"
#include <iostream>

seuraaja::seuraaja()
{
    cout << "S konst" << endl;
}

seuraaja::seuraaja(string annettuNimi)
{
    cout << "S param konst" << endl;
    nimi = annettuNimi;
}

string seuraaja::getNimi()
{
    cout << "getNimi" << endl;
    return(nimi);
}

void seuraaja::paivitys(string viesti)
{
    cout << "paivitys" << endl;
    cout << "viesti: " << viesti << endl;
}
