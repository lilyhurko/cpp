#include "GrupaDziekanska.h"

using namespace std;

int main() {
    GrupaDziekanska grupa;

    grupa.dodajEmail(1100, "anna.nowak@gmail.com");
    grupa.dodajEmail(1101, "s54321@pollub.edu.pl");
    grupa.dodajEmail(1100, "s99999@pollub.edu.pl");
    grupa.dodajEmail(1001, "s12345@pollub.edu.pl");
    grupa.dodajEmail(1002, "s55555@pollub.edu.pl");
    grupa.dodajEmail(1010, "jan.kowalski@gmail.com");
    grupa.dodajEmail(1010, "s11111@pollub.edu.pl");

    grupa.wyswietlGrupe();

    string email = "s99999@pollub.edu.pl";
    int klucz = grupa.findKlucz(email);
    if (klucz != -1) {
        cout << "\nAdres " << email << " przypisany jest do indeksu: " << klucz << endl;
    } else {
        cout << "\nNie znaleziono adresu: " << email << endl;
    }


    cout << "\nWyszukiwanie indeksu 1100:" << endl;
    grupa.szukajWartosc(1100);

    return 0;
}
