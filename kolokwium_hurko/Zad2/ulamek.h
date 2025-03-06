#ifndef ULAMEK_H
#define ULAMEK_H

#include <iostream>
#include <string>
using namespace std;


template <typename T>
class Ulamek {
private:
    T licznik;
    T mianownik;

public:
    Ulamek(T licznik, T mianownik) : licznik(licznik), mianownik(mianownik) {}


    void dziesietny() {
        cout << "Licznik: " << licznik << ", Mianownik: " << mianownik << endl;
    }
};

template <>
class Ulamek<int> {
private:
    int licznik;
    int mianownik;

public:
    Ulamek(int licznik, int mianownik) : licznik(licznik), mianownik(mianownik) {}


    float dziesietny() {
        return static_cast<float>(licznik) / mianownik;
    }
};


template <>
class Ulamek<float> {
private:
    float licznik;
    float mianownik;

public:
    Ulamek(float licznik, float mianownik) : licznik(licznik), mianownik(mianownik) {}


    float dziesietny() {
        return licznik / mianownik;
    }
};


template <>
class Ulamek<string> {
private:
    string licznik;
    string mianownik;

public:
    Ulamek(string licznik, string mianownik) : licznik(licznik), mianownik(mianownik) {}


    void dziesietny() {
        cout << "Licznik: " << licznik << ", Mianownik: " << mianownik << endl;
    }
};

#endif
