//
// Created by arturk on 15.05.17.
//

#ifndef MACIERZE_MACIERZE_H
#define MACIERZE_MACIERZE_H

class Vector {
    int size;
    int *coordinates;

public:
    Vector(); //konstruktor defaultowy
    ~Vector(); //destruktor

    void load(int, int*);
};

#endif //MACIERZE_MACIERZE_H
