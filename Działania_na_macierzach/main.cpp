#include <iostream>
#include "Vectors.h"
#include "matrices.h"

int main() {
    //! Program do sprawdzania wektorow
    /*int skalar = 2;
    Vector a(2);
    cout << "WEKTORY" << endl;
    cout << "Defaulotwy wektor: ";
    Vector x(5);
    cout << x << endl;
    cout << "Podaj wspolrzedne pierwszego wektora (2): ";
    cin >> a;
    cout << a << endl;
    Vector b(a);
    cout << "Podaj wspolrzedne drugiego wektora (2): ";
    cin >> b;
    cout << b << endl;
    cout << "Wektor A[1]: " << a[1] << endl;
    Vector suma(a);
    Vector roznica(a);
    Vector mnozenie(a);
    //operator +
    suma = a + b;
    cout << "Suma: " << suma << endl;
    // operator -
    roznica = a - b;
    cout << "Roznica: " << roznica << endl;
    // operator * (mnozenie przez skalar)
    mnozenie = a * skalar;
    cout << "Mnozenie przez 2 wektora a: " << mnozenie << endl;
    // operator ==
    cout << "Czy sa takie same?: ";
    if(a == b){
        cout << "sa takie same" << endl;
    } else {
        cout << "sa rozne" << endl;
    }
    //operator !=
    cout << "Czy sa rozne?: ";
    if(a != b){
        cout << "sa rozne" << endl;
    } else {
        cout << "sa takie same" << endl;
    }
    //operator +=
    b += a;
    cout << "b += a: " << b << endl;
    //operator -=
    b -= a;
    cout << "b -= a: " << b << " (poczatkowe b to wynik poprzedniego dzialania)" << endl;
    //operator *=
    b *= skalar;
    cout << "b *= 2: " << b << endl << endl;
    return 0;

    //!Program sprawdzajacy macierze
*/
    int skalar = 2;
    cout << "MACIERZE" << endl;
    cout << "Defaultowa macierz: " << endl;
    Matrix A(5,5);
    cout << A << endl;
    cout << "Podaj wartosci pierwszej macierzy (2 x 2): ";
    cin >> A;
    cout << A << endl;
    Matrix B(A);
    cout << "Podaj wartosci drugiej macierzy (2 x 2): ";
    cin >> B;
    cout << B << endl;
    cout << A << endl;
    Matrix Suma(A);
    Matrix Roznica(A);
    Matrix Mnozenie(A);
    //operator +
    Suma = A + B;
    cout << "Suma: " << endl << Suma << endl;
    // operator -
    Roznica = A - B;
    cout << "Roznica: " << endl << Roznica << endl;
    // operator * (mnozenie przez skalar)
    Mnozenie = A * skalar;
    cout << "Mnozenie przez skalar macierzy A: " << endl << Mnozenie << endl;
    //cout << "a[2]: " << A[2][1] << endl;
    // operator ==
    cout << "Czy sa takie same?: ";
    if(A == B){
        cout << "sa takie same" << endl;
    } else {
        cout << "sa rozne" << endl;
    }
    //operator !=
    cout << "Czy sa rozne?: ";
    if(A != B){
        cout << "sa rozne" << endl;
    } else {
        cout << "sa takie same" << endl;
    }
    //operator +=
    B += A;
    cout << "b += a: " << endl << B << endl;
    //operator -=
    B -= A;
    cout << "b -= a: " << endl << B << endl;
    //operator *=
    B *= skalar;
    cout << "b *= skalar: " << endl << B << endl << endl;
    return 0;


}