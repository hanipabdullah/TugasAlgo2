#include <iostream>
using namespace::std;

int moduls(int angka,int moduluss)
{
    return angka&moduluss;
}

main()
{
    int angka,moduluss;
    char ulangi;
    do
    {
        cout<<" Masukan Angka Awal : ";cin>>angka;
        cout<<" Masukan Angka Modulus : ";cin>>moduluss;
        cout<<endl;
        cout<<" Angka "<<angka<<" Modulus "<<moduluss<<" = "<<moduls(angka,moduluss);
        cout<<endl;
        cout<<endl;
        cout<<" Apakah Anda Ingin Mengulangi (y/t) : ";cin>>ulangi;
    }
    while(ulangi=='y');
}
