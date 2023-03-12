#include <iostream>
#include "IOdanV.cpp"
#include "If.cpp"
#include "Looping.cpp"
#include "Array.cpp"
#include "BangunDatar.cpp"
#include "HitungBola.cpp"
using namespace std;

bool UlangiProgram(){
    string V;
    cout<<"\nUlagi Program? (y/n) :";cin>>V;
    if (V=="y"||V=="Y")
    {
        /* code */
        return true;
    }else{
        return false;
    }
}

int main()
{
    /* code */
    
    int pilihan=0;
    bool ulangi=true;
    

    cout<< "Selamat datang di MainProgram C++ -----------------------"<<endl;

    do
    {
        cout<<"Menu :"<<endl;
        cout<<"\t 1) Input,Output,Variable"<<endl;
        cout<<"\t 2) if Program"<<endl;
        cout<<"\t 3) Looping"<<endl;
        cout<<"\t 4) Array"<<endl;
        cout<<"\t 5) Hitung Bangun Datar"<<endl;
        cout<<"\t 6) Hitung Volume Bola dan permukaan"<<endl;

        cout<<"Masukan Pilihan Anda : (tulis angka menunya)";cin>> pilihan;
        /* code */
        switch (pilihan)
        {
            case 1:
                /* code */
                cout<<"\n---IOdanV-------------------------------------------\n\n";
                IOVin();
                cout<<"\n----------------------------------------------\n";
                ulangi = UlangiProgram();
                break;

            case 2:
                /* code */
                cout<<"\n---If-------------------------------------------\n\n";
                ifin();
                cout<<"\n----------------------------------------------\n";
                ulangi = UlangiProgram();
                break;
            
            case 3:
                /* code */
                cout<<"\n---Looping-------------------------------------------\n\n";
                loopingin();
                cout<<"\n----------------------------------------------\n";
                ulangi = UlangiProgram();
                break;

            case 4:
                /* code */
                cout<<"\n---Array-------------------------------------------\n\n";
                arrayin();
                cout<<"\n----------------------------------------------\n";
                ulangi = UlangiProgram();
                break;
            
            case 5:
                /* code */
                cout<<"\n---BangunDatar-------------------------------------------\n\n";
                BangunDatarin();
                cout<<"\n----------------------------------------------\n";
                ulangi = UlangiProgram();
                break;
            
            case 6:
                /* code */
                cout<<"\n---HitungVolumeBola&Permukaan-------------------------------------------\n\n";
                hitungBolain();
                cout<<"\n----------------------------------------------\n";
                ulangi = UlangiProgram();
                break;
            default:
                cout<<"\n \n";
                cout<<"Coba ulangi masukan Anda.";
                break;
        }

        cout<<"\n--------------------------------------------------------------\n\n";

    } while (ulangi);

    cout<<"Program Selesai";

    return 0;
}
