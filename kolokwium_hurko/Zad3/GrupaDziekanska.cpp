#include "GrupaDziekanska.h"

void GrupaDziekanska::dodajEmail(int indeks, const string& email) {
    grupa[indeks].push_back(email);
}

void GrupaDziekanska::wyswietlGrupe() {
    cout << "Czlonkowie grupy dziekanskiej:" << endl;
    for (const auto& element : grupa) {
        cout << "Indeks: " << element.first << " - Adresy e-mail: ";
        for (const auto& email : element.second) {
            cout << email << " ";
        }
        cout << endl;
    }
}

int GrupaDziekanska::findKlucz(const string& email) {
    for (const auto& element : grupa) {
        for (const auto& e : element.second) {
            if (e == email) {
                return element.first;
            }
        }
    }
    return -1;
}

void GrupaDziekanska::szukajWartosc(int indeks) {
    if (grupa.find(indeks) != grupa.end()) {
        cout << "Indeks: " << indeks << " - Adresy e-mail: ";
        for (const auto& email : grupa[indeks]) {
            cout << email << " ";
        }
        cout << endl;
    } else {
        cout << "Nie znaleziono indeksu: " << indeks << endl;
    }
}
