#ifndef GRUPADZIEKANSKA_H
#define GRUPADZIEKANSKA_H

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class GrupaDziekanska {
private:
    map<int, vector<string>> grupa;

public:
    void dodajEmail(int indeks, const string& email);
    void wyswietlGrupe();
    int findKlucz(const string& email);
    void szukajWartosc(int indeks);
};

#endif // GRUPADZIEKANSKA_H
