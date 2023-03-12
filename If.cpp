#include <iostream>
using namespace std;

// Deklarasi fungsi Ifin
void ifin()
{
    /* code */
    int a; // deklarasi variable untuk menyimpan nilai yang di input
    cout<<"System if --------------------"<<endl;   // Print Header

    cout << "Masukan bilangan bulat :";cin>>a; // Meminta inputan User dan memasukan inputan ke variable 'a'
    cout<<endl; // memberikan Newline;
    
    if (a < 10) // Jika nilai pada 'a' kurang dari 10
    {
        // Kondisi True
        cout<<a<<" Kurang dari 10"<<endl;
    }else
        {
            // Kondisi False
            cout<<a<<" Lebih dari 10"<<endl;
        }

    if (a%2 == 0) // Jika nilai pada 'a' adalah Genap
    {
        // Kondisi True
        cout<<a<<" Merupakan bilangan genap"<<endl;
    }else{
        // Kondisi False
        cout<<a<<" Merupakan bilangan ganjil"<<endl;
    }
    
    if (a<10)  // Jika nilai pada 'a' kurang dari 10
    {
        // Kondisi True
        cout<<"bilangan kecil ";
        if (a%2 == 0) // Jika nilai pada 'a' adalah Genap
        {
            // Kondisi True
            cout<<"dan bisa di bagi tanpa sisa "<<endl;
        }else{
            // Kondisi False
            cout<<"dan bisa di bagi hingga sisa 1 "<<endl;
        }
        
    }else
        {
            // Kondisi False
            cout<<"bilangan besar ";
            if (a%2 == 0) // Jika nilai pada 'a' adalah Genap
            {
                // Kondisi True
                cout<<"dan bisa di bagi tanpa sisa "<<endl;
            }else{
                // Kondisi False
                cout<<"dan bisa di bagi hingga sisa 1 "<<endl;
            }
        }
}

int main(int argc, char const *argv[])
{
    /* code */
    ifin(); // memanggil Fungsi ifin
    return 0;
}

