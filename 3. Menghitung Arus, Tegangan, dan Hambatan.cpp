#include <iostream>
using namespace std;

int main (){

    float i, v, r;

//Menghitung Arus (I)
    cout << "Mencari nilai arus" << endl;
    cout << "Nilai V = ";
    cin >> v;
    cout << "Nilai R = ";
    cin >> r;

    i = v/r;

    cout << "Maka, nilai I = " << i << endl;

    cout << "" << endl;

//Menghitung Tegangan (V)
    cout << "Mencari nilai tegangan" << endl;
    cout << "Nilai I = ";
    cin >> i;
    cout << "Nilai R = ";
    cin >> r;

    v = i*r;

    cout << "Maka, nilai V = " << v << endl;

    cout << "" << endl;

//Menghitung Hambatan (R)
    cout << "Mencari nilai hambatan" << endl;
    cout << "Nilai V = ";
    cin >> v;
    cout << "Nilai I = ";
    cin >> i;

    r = v/i;

    cout << "Maka, nilai R = " << r;

    return 0;
}
