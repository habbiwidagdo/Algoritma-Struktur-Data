#include<iostream>
#include<iomanip>
using namespace std;

struct daftarbuku
{
    string isbn;
    string judul;
    int nhal;
    string penerbit;
    string kota;
};

void input(int n, daftarbuku inputbuku[]){
    for (int i = 0; i < n; i++)
    {
        cout << "Buku ke-" << i+1 << endl;
        cout << "ISBN: ";
        cin.ignore(); getline(cin, inputbuku[i].isbn);
        cout << "Judul buku: ";
        getline(cin, inputbuku[i].judul);
        cout << "Jumlah halaman: ";
        cin >> inputbuku[i].nhal;
        cout << "Nama penerbit: ";
        cin.ignore(); getline(cin, inputbuku[i].penerbit);
        cout << "Kota: ";
        getline(cin, inputbuku[i].kota);
        cout << endl;
    }
}

void output(int n, daftarbuku inputbuku[]){
    cout << left << setw(15) << "ISBN" 
    << setw(30) << "Judul Buku" 
    << setw(15) << "Jumlah Halaman" 
    << setw(30) << "Nama Penerbit" 
    << setw(25) << "Kota" << endl;

    cout << setfill('-') << setw(105) << "" << setfill(' ') << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(15) << inputbuku[i].isbn
        << setw(30) << inputbuku[i].judul
        << setw(15) << inputbuku[i].nhal
        << setw(30) << inputbuku[i].penerbit
        << setw(25) << inputbuku[i].kota << endl;
    }
}

int main(){
    int n;
    cout << "Masukkan jumlah buku yang ingin diinput\n";
    cout << "Jumlah buku: ";
    cin >> n;
    cout << endl;
    daftarbuku inputbuku[n];
    input(n, inputbuku);
    output(n, inputbuku);
    return 0;
}