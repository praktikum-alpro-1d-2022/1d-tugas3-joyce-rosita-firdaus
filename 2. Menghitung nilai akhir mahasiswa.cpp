#include <iostream>
using namespace std;

int main (){

//Menghitung nilai akhir mahasiswa

    float hasil, praktikum = 75, uts = 70, uas = 88;

    cout << "Menghitung nilai akhir mahasiswa" << endl;
    cout << "Nilai Praktikum = " << praktikum << endl;
    cout << "Nilai UTS = " << uts << endl;
    cout << "Nilai UAS = " << uas << endl;

    cout << "" << endl;

    cout << "Ketentuan perhitungan nilai: \nPraktikum 20%\nUTS 30%\nUAS 50%" << endl;

    cout << "" << endl;

    hasil = (praktikum * 0.2) + (uts * 0.3) + (uas * 0.5);

    cout << "Sehingga, nilai akhir mahasiswa = " << hasil;

    return 0;
}
