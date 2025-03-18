#include <iostream>
using namespace std;

float LuasPersegiPanjang(float p,float l){
    return p * l;
}

float LuasLingkaran(float r){
    return 3.14 * r * r;
}

int main(){
    int pilihan;
    float Panjang, Lebar, Jejari;
    do
    {
        cout << "Menu" << endl;
        cout << "1.Menghitung Luas Persegi Panjang" << endl;
        cout << "2.Menghitung Luas Lingkaran" << endl;
        cout << "3.Exit" <<endl;
        cout << "Pilihan (1/2/3) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Menghitung Luas Persegi Panjang" <<endl;
            cout << "Masukan Panjang : " <<endl;
            cin >>Panjang;
            cout << "Masukan Lebar : " <<endl;
            cin >>Lebar;
            cout << "Luas Persegi Panjang" <<
             LuasPersegiPanjang(Panjang, Lebar) << endl;
             cout << endl;
            break;
        }
    }
}