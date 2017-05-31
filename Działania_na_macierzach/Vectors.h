//
// Created by arturk on 16.05.17.
//

#ifndef DZIAANIA_NA_MACIERZACH_VECTORS_H
#define DZIAANIA_NA_MACIERZACH_VECTORS_H

#include <iostream>

using namespace std;


class Vector {
    int size;
    int *coordinates;

public:
    Vector(int = 2); //konstruktor
    Vector(const Vector &);
    ~Vector(); //destruktor

    Vector &operator=(const Vector &);
    Vector operator+(const Vector &);
    Vector operator-(const Vector &);
    Vector operator*(const int &);

    Vector &operator+=(const Vector &);
    Vector &operator-=(const Vector &);
    Vector &operator*=(const int &);

    bool operator==(const Vector &);
    bool operator!=(const Vector &);
    int operator[](const int &);

    friend istream &operator>>(istream &, Vector &);
    friend ostream &operator<<(ostream &, const Vector &);
};

#endif //DZIAANIA_NA_MACIERZACH_VECTORS_H
