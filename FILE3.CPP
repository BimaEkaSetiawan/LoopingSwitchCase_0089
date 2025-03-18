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
            cout << "Masukan Panjang : " ;
            cin >>Panjang;
            cout << "Masukan Lebar : " ;
            cin >>Lebar;
            cout << "Luas Persegi Panjang" <<
             LuasPersegiPanjang(Panjang, Lebar) << endl;
             cout << endl;
            break;
        case 2:
        cout << "Menghitung Luas Lingkaran" <<endl;
        cout << "Masukan jejari : ";
        cin >> Jejari;
        cout << "luas Lingkaran: " << LuasLingkaran(Jejari) <<endl;
        cout <<endl;
        break;
        case 3:
        break;
        default :
        cout << "Pilihan Anda Salah" <<endl;
        cout <<endl;
        }
    }while (pilihan !=3);
  
}