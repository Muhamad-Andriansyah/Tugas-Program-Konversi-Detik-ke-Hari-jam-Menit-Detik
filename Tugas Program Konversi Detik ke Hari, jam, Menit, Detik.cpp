#include <iostream>

using namespace std;

int main()
{
    cout << "KONVERSI DETIK KE HARI JAM MENIT DETIK - MUHAMAD ANDRIANSYAH (NIM 311810297) TI18-B2" <<endl;

    long detik, menit, jam, hari;
    cout<<"masukan satuan detik = \n"; cin >>detik;
    cout<<"\n";
    hari=detik/86400;
    jam=detik/3600;
    menit=detik/60;
    cout<<detik<< "detik sama dengan = \n";
    cout<<"===>"<<hari<<"hari\n";
    cout<<"===>"<<jam<<"jam\n";
    cout<<"===>"<<menit<<"menit";
    return 0;

}
