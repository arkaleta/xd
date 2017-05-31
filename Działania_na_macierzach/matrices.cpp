//
// Created by arturk on 16.05.17.
//

#include "matrices.h"

Matrix::Matrix(int size, int number) {
    v_length = size;
    v_number = number;
    vectors = new Vector*[v_number];
    for(int i=0; i < v_number; i++)
        vectors[i] = new Vector(size);
}

Matrix::Matrix(const Matrix &m1) {
    v_length = m1.v_length;
    v_number = m1.v_number;
    vectors = new Vector*[v_number];
    for(int i=0; i < v_number; i++){
        vectors[i] = new Vector(v_length);
        *(vectors[i]) = *(m1.vectors[i]);
    }
}

Matrix::~Matrix() {
    delete[] vectors;
}

Matrix &Matrix::operator=(const Matrix &M2){
    for(int i=0; i < v_number; i++) {
        *(vectors[i]) = *(M2.vectors[i]);
    }
    return *this;

}

Matrix Matrix::operator+(const Matrix &M2){
    if (v_length != M2.v_length || v_number != M2.v_number){
        cout << "Macierze muszą miec takie same wymiary aby je dodawac"<< endl << "Program zakonczy dzialanie";
        exit(1);
    }
    Matrix M3(v_length, v_number);
    for(int i=0; i < v_number; i++)
        *(M3.vectors[i]) = *(vectors[i]) + *(M2.vectors[i]);
    return M3;
}

Matrix Matrix::operator-(const Matrix &M2){
    if (v_length != M2.v_length || v_number != M2.v_number){
        cout << "Macierze muszą miec takie same wymiary aby je odejmowac"<< endl << "Program zakonczy dzialanie";
        exit(1);
    }
    Matrix M3(v_length, v_number);
    for(int i=0; i < v_number; i++)
        *(M3.vectors[i]) = *(vectors[i]) - *(M2.vectors[i]);
    return M3;
}

Matrix Matrix::operator*(const int &value){
    Matrix M3(v_length, v_number);
    for(int i=0; i < v_number; i++)
        *(M3.vectors[i]) = *(vectors[i]) * value;
    return M3;
}

Matrix &Matrix::operator+=(const Matrix &M2){
    if (v_length != M2.v_length || v_number != M2.v_number){
        cout << "Macierze muszą miec takie same wymiary aby je dodawac"<< endl << "Program zakonczy dzialanie";
        exit(1);
    }
    for(int i=0; i < v_number; i++)
        *(vectors[i]) += *(M2.vectors[i]);
    return *this;
}

Matrix &Matrix::operator-=(const Matrix &M2){
    if (v_length != M2.v_length || v_number != M2.v_number){
        cout << "Macierze muszą miec takie same wymiary aby je odejmować"<< endl << "Program zakonczy dzialanie";
        exit(1);
    }
    for(int i=0; i < v_number; i++)
        *(vectors[i]) -= *(M2.vectors[i]);
    return *this;
}

Matrix &Matrix::operator*=(const int &value){
    for(int i=0; i < v_number; i++)
        *(vectors[i]) *= value;
    return *this;
}

bool Matrix::operator==(const Matrix &M2){
    for(int i=0; i < v_number || i < M2.v_number; i++){
        if(*(vectors[i]) != *(M2.vectors[i]))
            return false;
    }
    return true;
}

bool Matrix::operator!=(const Matrix &M2){
    for(int i=0; i < v_number || i < M2.v_number; i++){
        if(*(vectors[i]) == *(M2.vectors[i]))
            return false;
    }
    return true;
}

Vector Matrix::operator[](const int &value){
    return *(vectors[value]);
}

istream &operator>>(istream &in, Matrix &M1){
    for(int i=0; i < M1.v_number; i++){
        in >> *(M1.vectors[i]);
    }
    return in;
}

ostream &operator<<(ostream &out, const Matrix &M1){
    for(int i=0; i < M1.v_number - 1; i++){
        out << *(M1.vectors[i]) << endl;
    }
    out << *(M1.vectors[M1.v_number - 1]);
    return out;
}



