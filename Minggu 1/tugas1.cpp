#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "arr[N]\n";
    cout << "N: ";
    cin >> N;
    int arr[N];
    int i = 0;
    int genap = 0;
    int ganjil = 0;
    cout << endl;
    cout << "Masukkan nilai\n";
    while (i < N)
    {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> arr[i];
        if (arr[i] %2 != 0)
        {
            ganjil++;
        }
        else if (arr[i] %2 == 0)
        {
            genap++;
        }
        ++i;
    }
    cout << "Genap: " << genap << endl;
    cout << "Ganjil: " << ganjil << endl;
    return 0;
}