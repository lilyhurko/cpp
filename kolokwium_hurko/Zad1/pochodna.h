#ifndef POCHODNA_H
#define POCHODNA_H

#include "Bazowa.h"


class Pochodna : public Bazowa {
public:
    Pochodna(int liczba);
    void print();
    void show() override;
};

#endif
