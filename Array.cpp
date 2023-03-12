#include <iostream>

using namespace std;

void arrayin()
{
    /* code */
     cout<<endl;
     cout<<"---- Array ----------------------------------------\n\n"; // membuat header

    cout<<"[1D]\n\n"; // sub header
    
    string nama[3] = {"Ahmad", "Regi","Udin"}; //deklarasi array string 1D
    int n; // variable nilai

    cout<<"Isi Array nama [3] :"<<endl; // print caption

    for (int i = 0; i <3; i++) // Print semua list data pada array nama
    {
        cout<<"\t"<<i+1<<") "<<nama[i]<<"\n";
    }
    cout<<endl;
    cout<<"pilih data dari Array nama dengan indeks ke: ";cin>>n; // menginput index array untik di print
    cout<<"data dengan indeks ke -"<<n<<" adalah "<<nama[n-1]<<endl<<endl<<endl; // print nilai Array

    cout<<"[2D]\n\n";

    string mahasiswa [3][3];
    int x,y;
    
    //baris ke 1
    mahasiswa[0][0] = "2151";
    mahasiswa[0][1] = nama[0];
    mahasiswa[0][2] = "Jakarta";

    //baris ke 2
    mahasiswa[1][0] = "2152";
    mahasiswa[1][1] = nama[1];
    mahasiswa[1][2] = "Bandung";

    //baris ke 3
    mahasiswa[2][0] = "2153";
    mahasiswa[2][1] = nama[2];
    mahasiswa[2][2] = "Jogja";
    cout<<"data array mahasiswa [3][3] :\n\n";
    cout<<"   Nim \t  Nama \t Alamat\n";
    cout<<"-------------------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<i<<") ";
        /* code */
        for (int j = 0; j< 3; j++)
        {
            /* code */
            cout<<mahasiswa[i][j]<<"   ";
        }
        cout<<endl;
    }

    cout<<"\npilih data dari index array mahasiswa [x][y] dengan nilai \n";
    cout<<"  x =";cin>>x;
    cout<<"  y =";cin>>y;
    cout<<"maka data mahasiswa["<<x<<"]["<<y<<"] adalah "<<mahasiswa[x][y];
}

int main(int argc, char const *argv[])
{
    arrayin();
    return 0;
}
