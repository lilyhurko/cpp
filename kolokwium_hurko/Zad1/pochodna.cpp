#include "Pochodna.h"


Pochodna::Pochodna(int liczba) : Bazowa(liczba * 100) {}


void Pochodna::print() {
    cout << "liczba pochodna: " << liczba << endl;
}


void Pochodna::show() {
    cout << "liczba pochodna virtual: " << liczba << endl;
}
