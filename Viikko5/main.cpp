#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    notifikaattori n;
    seuraaja* s1 = new seuraaja("Heimo");
    seuraaja* s2 = new seuraaja("Raimo");
    seuraaja* s3 = new seuraaja("Huendok");

    n.tulosta();
    n.postita("Hei vaan!");
    n.poista(s2);

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.tulosta();
    n.postita("Hei vaan!!");

    n.poista(s2);
    n.tulosta();
    n.poista(s1);
    n.poista(s3);
    n.tulosta();

    return 0;
}
