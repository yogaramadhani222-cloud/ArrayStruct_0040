#include <iostream>
using namespace std;

struct alamatDetail 
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nama;
    alamatDetail alamat;
    int umur;
};

int main()
{
    //deklarasi variable struct
    mahasiswa mhs;
    //mengisi data
    cout << "isikan data nama:";
    cin >> mhs.nama;
    cout << "isikan data alamat:";
    cin >> mhs.alamat.kota;
    cout << "isikan data usia:";
    cin >> mhs.umur;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat :"<< mhs.alamat.kota << endl;
    cout << "Usia: " << mhs.umur << endl;
}