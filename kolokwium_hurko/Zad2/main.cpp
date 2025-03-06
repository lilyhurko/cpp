#include "Ulamek.h"

int main() {

    Ulamek<float> ulamekFloat(3.5, 2.5);
    cout << "Dla typu float: " << ulamekFloat.dziesietny() << endl;


    Ulamek<int> ulamekInt(3, 5);
    cout << "Dla typu int: " << ulamekInt.dziesietny() << endl;


    Ulamek<string> ulamekString("3", "5");
    cout << "Dla typu string: ";
    ulamekString.dziesietny();

    return 0;
}
