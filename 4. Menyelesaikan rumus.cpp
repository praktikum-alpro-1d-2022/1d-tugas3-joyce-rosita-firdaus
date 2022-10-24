#include <iostream>
#include <math.h>
using namespace std;

int main (){

    int b = 25, x = 15, c = 20;
    float y;

    cout << "Diketahui persamaan Y = bx^2 + 0.5x - c" << endl;
    cout << "Penyelesaian persamaan di atas adalah:" << endl;
    cout << "Nilai b = " << b << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai c = " << c << endl;

    y = (b * (pow (x,2))) + (0.5 * x) - c;

    cout << "Maka, hasil dari Y adalah " << y;

    return 0;
}
