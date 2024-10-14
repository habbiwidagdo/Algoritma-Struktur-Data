#include<iostream>
using namespace std;

void hitung(int *a, int n){
    int total = 0;
    int i = 0;
    int n_indeks = 0;
    while (i < n)
    {
        total += a[i];
        n_indeks += 1;
        i++;
    }
    cout << "Total nilai yang diinput: " << total << endl;
    cout << "Jumlah elemen: " << n_indeks << endl;
}

int main(){
    int arr[100];
    int i;
    cout << "Masukkan nilai ke dalam array\n";
    cout << "Program akan berhenti menginput apabila: \n";
    cout << "- User menginput nilai sampai array penuh (100)\n";
    cout << "- User menginput nilai -999\n";
    cout << endl;
    cout << "Input nilai\n";
    int a = 0;
    for (i = 0; i < 100; i++)
    {
        cout << "Ke-" << i+1 << ": ";
        cin >> a;
        if (a == -999)
        {
            hitung(arr, i);
            break;
        }
        else if (a != -999)
        {
            arr[i] = a;
        }
    }
    return 0;
}