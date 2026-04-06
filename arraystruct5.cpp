#include <iostream>
#include <string>
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
    mahasiswa mhs[3];
    //mengisi data
    for (int i = 0; 1 <= 2; i++)
    {
    cout << "isikan data nama:";
    getline(cin, mhs[i].nama);
    cout << "isikan data kota:";
    getline(cin, mhs[i].alamat.kota);
    cout << "isikan data desa:";
    getline(cin, mhs[i].alamat.desa);
    cout << "isikan data usia:";
    cin >> mhs[1].umur;

     
    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Alamat :"<< mhs[i].alamat.kota << endl;
    cout << "Usia: " << mhs[i].umur << endl;
    }
}