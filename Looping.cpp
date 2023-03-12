#include <iostream>
using namespace std;

void loopingin() // deklarasi fungsi loopingin
{
    // Deklarasi Variable
    int a,b;
    string k;

    do // kode di dalam 'do' akan terus di ulang apabila syarat while terpenuhi
    {
        a=0; // Variable untuk menyimpan banyak perulangan
        
        cout<<"---- Looping ------------------------------------------"<<endl<<endl; // Print Header
        cout<<"Masukan Banyak perulangan : ";cin>> a; // Input Banyak Perulangan

        cout<<"-- 1"<<endl; // Sub Header 1

        for (int i = 1; i < a+1; i++) // Perulangan untuk bentuk pertama
        {
            /* code */
            cout<< "Ini perulangan ke -"<<i<<endl; // menampilkan nilai index sesuai perulangan nya
        }

        cout<<endl; // Print Newline

        cout<<"--- 2"<<endl<<endl; // Sub Header 2
        b=1; // Var di gunakan Sebagai print * segitiga

        for (int i = a; i > 0; i--) // sistem membangun segitiga dengan perulangan
        {
            /* code */
            for (int j = 0; j < i-1; j++) // membuat spasi kosong
            {
                /* code */
                cout<<" ";
            }
            for (int k = 0; k < b ; k++) // memprint bintang
            {
                /* code */
                cout<<"*";
            }
            b+=2; // menambah 2 bintang setiap baris baru
            cout<<endl; // membuat baris baru
        }

        cout<<"Ulangi Looping (y/n) ?";cin>>k; // Meminta inputan untuk mengulang program atau tidak
        cout<<endl<<endl;

    } while (k=="Y" || k=="y"); // Penentu program 'do' di ulang atau tidak
}

int main(int argc, char const *argv[])
{
    loopingin(); // menjalankan Fungsi loopingin
    return 0;
}

