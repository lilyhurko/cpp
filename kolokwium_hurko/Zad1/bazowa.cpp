#include "Bazowa.h"


Bazowa::Bazowa(int liczba) : liczba(liczba) {}


void Bazowa::print() {
    cout << "liczba bazowa: " << liczba << endl;
}


void Bazowa::show() {
    cout << "liczba bazowa virtual: " << liczba << endl;
}
