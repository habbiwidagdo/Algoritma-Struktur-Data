#include<iostream>
using namespace std;

struct nilai
{
    int kimia;
    int fisika;
    int matematika;
    int rerata;
    string nama;
};

void input(int jumlah, nilai siswa[], int total[]){
    cout << "Masukkan nilai dengan rentang 0-100\n";
    for (int i = 0; i < jumlah; i++)
    {
        cout << "Siswa ke-" << i+1 << endl;
        cout << "Nilai kimia: ";
        cin >> siswa[i].kimia;
        cout << "Nilai fisika: ";
        cin >> siswa[i].fisika;
        cout << "Nilai matematika: ";
        cin >> siswa[i].matematika;
        total[i] = siswa[i].kimia + siswa[i].fisika + siswa[i].matematika;
        siswa[i].rerata = total[i]/3;
        cout << "Nama: ";
        cin.ignore();
        getline(cin,siswa[i].nama);
        cout << endl;
    }   
}

void output(int jumlah, nilai siswa[]){
    int reratamaxIndex = 0;
    for (int i = 1; i < jumlah; i++)
    {
        if (siswa[i].rerata > siswa[reratamaxIndex].rerata)
        {
            reratamaxIndex = i;
        }
    }
    cout << "Siswa dengan rerata tertinggi\n";
    cout << "Nama: " << siswa[reratamaxIndex].nama << endl;
    cout << "Rerata: " << siswa[reratamaxIndex].rerata << endl << endl;
    for (int i = 0; i < jumlah; i++)
    {
        if (siswa[i].rerata < 60)
        {
            cout << "Siswa yang mengikuti remidi\n";
            cout << "Nama: " << siswa[i].nama << endl;
            cout << "Rerata: " << siswa[i].rerata << endl;
        }
        
    }
}

int main(){
    int n;
    cout << "Masukkan jumlah data yang ingin diinput: ";
    cin >> n;
    nilai siswa[n];
    int total[n];
    int rerata[n];
    cout << endl;
    input(n, siswa, total);
    output(n, siswa);
}