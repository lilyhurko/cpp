#include "Bazowa.h"
#include "Pochodna.h"

int main() {
    Bazowa bazowa(10);
    bazowa.print();
    bazowa.show();

    cout << endl;


    Pochodna pochodna(10);
    pochodna.print();
    pochodna.show();

    cout << endl;


    Bazowa* ptr = &pochodna;
    ptr->print();
    ptr->show();

    return 0;
}
