//
// Created by arturk on 15.05.17.
//
#include <iostream>
#include "../macierze.h"

using namespace std;

void Vector::load(int n, int *tab) {//funkcja wpisująca dane do wektora
    size = n;
    coordinates = new int[size];
    for(int i=0; i<size; i++)
        coordinates[i] = tab[i];
}

Vector::Vector() { //konstruktor defaultowy
    load(2, 0);
}

Vector::~Vector() { //destruktor
    delete(coordinates);
}