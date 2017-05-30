//
// Created by arturk on 16.05.17.
//

#ifndef DZIAANIA_NA_MACIERZACH_MATRICES_H
#define DZIAANIA_NA_MACIERZACH_MATRICES_H


#include "Vectors.h"

class Matrix {
    int v_length;
    int v_number;
    Vector **vectors;

public:
    Matrix(int = 2, int = 2); //konstruktor
    Matrix(const Matrix &); //konstruktor kopiujacy
    ~Matrix(); //destruktor

    Matrix &operator=(const Matrix &);
    Matrix operator+(const Matrix &);
    Matrix operator-(const Matrix &);
    Matrix operator*(const int &);

    Matrix &operator+=(const Matrix &);
    Matrix &operator-=(const Matrix &);
    Matrix &operator*=(const int &);

    bool operator==(const Matrix &);
    bool operator!=(const Matrix &);
    Vector operator[](const int &);

    friend istream &operator>>(istream &, const Matrix &);
    friend ostream &operator<<(ostream &, const Matrix &);


};


#endif //DZIAANIA_NA_MACIERZACH_MATRICES_H
