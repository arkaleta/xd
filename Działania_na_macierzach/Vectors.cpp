//
// Created by arturk on 16.05.17.
//

#include "Vectors.h"

Vector::Vector(int n) {
    size = n;
    coordinates = new int[size];
    for(int i=0; i < size; i++)
        coordinates[i] = 0;
} //konstruktor

Vector::Vector(const Vector &V2){
    size = V2.size;
    coordinates = new int[size];
    for(int i = 0; i < size; i++)
        coordinates[i] = V2.coordinates[i];
} //konstruktor kopiujacy

Vector::~Vector() {
    delete(coordinates);
} //destructor

Vector &Vector::operator=(const Vector &V2) {
    for(int i = 0; i < size; i++){
        coordinates[i] = V2.coordinates[i];
    }
    return *this;
}

Vector Vector::operator+(const Vector &V2) {
    if (size != V2.size){
        cout << "Wektory muszą miec takie same wymiary aby je dodawac"<< endl << "Program zakonczy dzialanie";
        exit(1);
    }
    Vector v3(size);
    for (int i = 0; i < size; i++)
        v3.coordinates[i] = coordinates[i] + V2.coordinates[i];
    return v3;
}

Vector Vector::operator-(const Vector &V2) {
    if(size != V2.size) {
        cout << "Wektory muszą miec takie same wymiary aby je odejmowac" << endl << "Program zakonczy dzialanie";
        exit(1);
    }
    Vector v3(size);
    for (int i = 0; i < size; i++)
        v3.coordinates[i] = coordinates[i] - V2.coordinates[i];
    return v3;
}

Vector Vector::operator*(const int &value) {
    Vector v3(size);
    for(int i = 0; size < i; i++)
        v3.coordinates[i] = coordinates[i] * value;
    return v3;
}

Vector &Vector::operator+=(const Vector &V2){
    if(size != V2.size) {
        cout << "Wektory muszą miec takie same wymiary aby je dodawać" << endl << "Program zakonczy dzialanie";
        exit(1);
    }
    for (int i = 0; i < size || i < V2.size; ++i)
        coordinates[i] += V2.coordinates[i];
    return *this;
}

Vector &Vector::operator-=(const Vector &V2){
    if(size != V2.size) {
        cout << "Wektory muszą miec takie same wymiary aby je odejmowac" << endl << "Program zakonczy dzialanie";
        exit(1);
    }
    for (int i = 0; i < size || i < V2.size; ++i)
        coordinates[i] -= V2.coordinates[i];
    return *this;
}

Vector &Vector::operator*=(const int &value){
    for (int i = 0; i < size; ++i)
        coordinates[i] *= value;
    return *this;
}

bool Vector::operator==(const Vector &V2){
    for (int i = 0; i < size || i < V2.size; ++i) {
        if(coordinates[i] != V2.coordinates[i])
            return false;
    }
    return true;
}

bool Vector::operator!=(const Vector &V2){
    for (int i = 0; i < size || i < V2.size; ++i) {
        if(coordinates[i] == V2.coordinates[i])
            return false;
    }
    return true;
}

int Vector::operator[](const int &value){
    return coordinates[value - 1];
}

istream &operator>>(istream &in, const Vector &V1) {
    for(int i = 0; i < V1.size; i++){
         in >> V1.coordinates[i];
    }
    return in;
}

ostream &operator<<(ostream &out, const Vector &V1){
    out << "[";
    for (int i = 0; i < V1.size; ++i) {
        out << V1.coordinates[i];
        if(i+1 < V1.size) out << " ";
    }
    out << "]";
    return out;
}

