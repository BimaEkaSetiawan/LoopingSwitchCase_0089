#include <iostream>
#include <cstdalign>
#include <ctime>

using namespace std;

int main(){
    //perulangan while
    cout <<"Perulangan While" << endl;
    int x;
    int PerulanganWhile = 0;
    int PerulanganDoWhile = 0;
    srand(time(0));
    x = rand() % 10;

    cout <<"Nilai x Awal : " << x << endl;
    while(x < 7){
        cout << "Nilai x : " << x << "Lari Keliling Lapangan" << endl;
        x = rand() % 10;
        PerulanganWhile++;
    }

    cout << "Nilai x Akhir : " << x << endl;
    cout << "Jumlah Perulangan : " << PerulanganWhile << endl;
    cout << endl;

    //perulangan do while
    cout << "Perulangan Do While" << endl;
    do
    {
        cout << "Nilai x : " << x << "Lari Keliling Lapangan" << endl;
        x = rand() % 10;
        PerulanganDoWhile++;
    } while (x < 7);
    cout << "Nilai x Akhir : " << x << endl;
    cout << "Jumlah Perulangan : " <<PerulanganDoWhile << endl;
    

}