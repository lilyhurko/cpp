#ifndef BAZOWA_H
#define BAZOWA_H

#include <iostream>
using namespace std;

// Deklaracja klasy Bazowa
class Bazowa {
protected:
    int liczba;

public:
    Bazowa(int liczba);
    void print();
    virtual void show();
    virtual ~Bazowa() = default;
};

#endif
