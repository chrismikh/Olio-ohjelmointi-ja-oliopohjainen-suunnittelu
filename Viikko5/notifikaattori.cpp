#include "notifikaattori.h"
#include <iostream>

notifikaattori::notifikaattori()
{
    cout << "Notifikaattori konst" << endl;
}

void notifikaattori::lisaa(seuraaja* lisaaSeuraajaPtr)
{
    cout << "Lisaa seuraaja" << endl;

    if (lisaaSeuraajaPtr == nullptr)
    {
        return;
    }

    if (seuraajat == nullptr)
    {
        seuraajat = lisaaSeuraajaPtr;
        return;
    }

    lisaaSeuraajaPtr->next = seuraajat;
    seuraajat = lisaaSeuraajaPtr;
}

void notifikaattori::poista(seuraaja* poistaSeuraajaPtr)
{
    cout << "Poista seuraaja" << endl;

    if (poistaSeuraajaPtr == nullptr)
    {
        return;
    }

    if (seuraajat == nullptr)
    {
        return;
    }

    if (seuraajat == poistaSeuraajaPtr)
    {
        seuraajat = seuraajat->next;
        return;
    }

    seuraaja* seurTempNext = seuraajat->next;
    seuraaja* seurTempPrev = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        if (seurTempNext == poistaSeuraajaPtr)
        {
            seurTempPrev->next = seurTempNext->next;
            return;
        }

        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext->next;
    }

    if (seurTempNext == poistaSeuraajaPtr)
    {
        seurTempPrev->next = nullptr;
    }

}

void notifikaattori::tulosta()
{
    if (seuraajat == nullptr)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }

    seuraaja* seurTempNext = seuraajat;

    while (seurTempNext->next != nullptr)
    {
        cout << seurTempNext->getNimi() << endl;
        seurTempNext = seurTempNext->next;
    }

    cout << seurTempNext->getNimi() << endl;
}

void notifikaattori::postita(string viesti)
{
    if (seuraajat == nullptr)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }

    seuraaja* seurTempNext = seuraajat;

    while (seurTempNext->next != nullptr)
    {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext->next;
    }

    seurTempNext->paivitys(viesti);
}
