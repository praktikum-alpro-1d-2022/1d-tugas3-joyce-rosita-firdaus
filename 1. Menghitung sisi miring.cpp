#include <iostream>
#include <math.h>
using namespace std;
int main (){

//Menghitung sisi miring dengan rumus phytagoras

    int alas = 8, tinggi = 10;
    float miring;

    cout << "Menghitung sisi miring segitiga menggunakan rumus phytagoras" << endl;
    cout << "Nilai sisi alas = " << alas << endl;
    cout << "Nilai sisi tinggi = " << tinggi << endl;

    miring = sqrt (pow (alas,2) + pow (tinggi,2));

//sqrt berfungsi untuk mencari akar
//pow berfungsi untuk menghitung pangkat

    cout << "Nilai sisi miringnya adalah " << miring;

    return 0;
}
