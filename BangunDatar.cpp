#include <iostream>
using namespace std;

void BangunDatarin()
{
    /* code */
    // Persegi
    float luas,p,r,a,t,lk,lb;

    cout<<"-----Hitung luas Persegi-----"<< endl;
    cout<<"Masukan Panjang sisi Persegi: ";cin>> p;
    luas = p*p;
    cout<<"Luas Persegi dengan panjang "<<p<<" adalah : "<<luas;

    cout<<endl<<endl;

    cout<<"-----Hitung luas Segitiga-----"<< endl;
    cout<<"Masukan Alas: ";cin>> a;
    cout<<"Masukan Tinggi: ";cin>>t;
    luas = (a*t)/2;
    cout<<"Luas Segitiga dengan alas "<<a<<" dan tinggi "<<t<<" adalah : "<<luas;

    cout<<endl<<endl;

    cout<<"-----Hitung luas lingkaran-----"<< endl;
    cout<<"Masukan jari-jari: ";cin>> r;
    luas = 3.14*(r*r);
    cout<<"Luas Lingkaran dengan Jari jari "<<r<<" adalah : "<<luas;

    cout<<endl<<endl;

    cout<<"-----Hitung Volume Kubus dengan bola di dalam nya-----"<< endl;
    cout<<"Masukan sisi kubus: ";cin>>p;

    lk=p*p*p;
    cout<<"Volume kubus = "<<lk<<endl<<endl;
    
    r=p/2;
    lb= 1.33*(3.14*(r*r*r));
    cout<<"Volume bola = "<<lb<<endl<<endl;
    
    luas= lk-lb;
    cout<<"Volume kubus dengan bola di dalam nya adalah : "<<luas;
    
}

int main(int argc, char const *argv[])
{
    BangunDatarin();
    return 0;
}
