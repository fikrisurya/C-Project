#include <iostream>
using namespace std;


// Deklarasi fungsi IOVin 
 void IOVin(){
    // Mencetak Title
    cout<<"---------IOV------------------"<<endl;

    // Deklarasi Variable dengan tipe data :
    int angka; 
    string kata; 
    float pecahan; 
    bool trueOrFalse;

    // Mengisi nilai variable sesuai dengan tipe datanya
    cout<<"Masukan Angka :";cin>>angka;
    cout<<"Masukan Kata :";cin>>kata;
    cout<<"Masukan Pecahan :";cin>>pecahan;
    cout<<"Masukan 0/1 :";cin>>trueOrFalse;

    // Mencetak NewLine
    cout<<endl;

    // Mencetak isi variable
    cout<<"isi dari variable yang bertipe int ="<<angka<<endl;
    cout<<"isi dari variable yang bertipe String ="<<kata<<endl;
    cout<<"isi dari variable yang bertipe float ="<<pecahan<<endl;
    cout<<"isi dari variable yang bertipe Boolean ="<<trueOrFalse<<endl;
}


int main(int argc, char const *argv[])
{
    // Memanggil fungsi IOVin
    IOVin();
    return 0;
}