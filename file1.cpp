#include <iostream>
using namespace std;

int main(){
    //perulangan for untuk pecacah naik
    int i;
    cout << "Perulangan For Pencacah Naik" << endl;
    for ( i = 0; i <= 4; i++)
    {
        cout << "Nilai i : " << i
        << " Lari Keliling Lapangan" << endl;
    }

    cout << "Nilai i Terakhir : " << i << endl;
    cout << endl;

    
    //perulangan for pencacah turun
    cout << "Perulangan For Pencacah Turun" << endl;
    for (i = 4; i >= 0; i--)
    {
        cout << "Nilai i : " << i
        << " Lari Keliling Lapangan" << endl;
    }

    cout << "Nilai i Terakhir : " << i << endl;
    cout << endl;
    
    
}