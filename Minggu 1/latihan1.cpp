#include<iostream>
using namespace std;

int main(){
    int arr[20];
    int total = 0;
    cout << "Masukkan 20 angka\n";
    for (int i = 0; i < 20; i++)
    {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> arr[i];
        total += arr[i];
    }
    cout << "Rerata: " << total/20;
    return 0;
}