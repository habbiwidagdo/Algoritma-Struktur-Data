#include<iostream>
using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    double ipk;
    string alamat;
};

void input(Mahasiswa *mhs, int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa " << i+1 << ": \n";
        cout << "Input NIM: ";
        getline(cin, mhs[i].nim);
        cout << "Input nama: ";
        getline(cin, mhs[i].nama);
        cout << "Input IPK: ";
        cin >> mhs[i].ipk;cin.ignore();
        cout << "Input alamat: ";
        getline(cin, mhs[i].alamat);
        cout << endl;
    }
}

void search(Mahasiswa *mhs, int n){
    string Nim;
    cout << "Masukkan NIM: ";
    cin >> Nim;
    for (int i = 0; i < n; i++)
    {
        if (Nim == mhs[i].nim)
        {
            cout << "Nama: " << mhs[i].nama << endl;
            cout << "NIM: " << mhs[i].nim << endl;
            cout << "IPK: " << mhs[i].ipk << endl;
            cout << "Alamat: " << mhs[i].alamat << endl;
            cout << endl;
            return;
        }
    }
    cout << "Mahasiswa tidak ditemukan!\n";
}

void ipk(Mahasiswa *mhs, int n){
    int tmp = 0;
    double total = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (mhs[j].ipk > mhs[i].ipk)
            {
                tmp = j;
            }
        }
        total += mhs[i].ipk;
    }
    cout << "Rata-rata IPK: " << total/(n-1) << endl;
    cout << "Mahasiswa dengan IPK tertinggi\n";
    cout << "Nama: " << mhs[tmp].nama << endl;
    cout << "IPK: " << mhs[tmp].ipk << endl;
    cout << endl;
}

void fitur(Mahasiswa *mhs, int n){
    char cek;
    char pick;
    do
    {
        cout << "Pilih fitur\n";
        cout << "1. Pencarian berdasarkan NIM\n";
        cout << "2. Menampilkan informasi rata-rata IPK dan IPK tertinggi\n";
        cout << "Pilihan: ";
        cin >> pick;
        cout << endl;
        if (pick == '1')
        {
            search(mhs, n);
        }
        else if (pick == '2')
        {
            ipk(mhs, n);
        }
        cout << "Apakah anda masih ingin menjalankan program?(y/n): ";
        cin >> cek;
    } while (cek == 'y');
}

int main(){
    cout << "Input jumlah mahasiswa: ";
    int N;
    cin >> N; cin.ignore();
    Mahasiswa mhs[N];
    input(mhs, N);
    fitur(mhs, N);
    return 0;
}