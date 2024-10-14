#include<iostream>
using namespace std;

int main(){
    int arr[20];
    cout << "Masukkan 20 angka\n" ;
    for (int i = 0; i < 20; i++)
    {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    int tmp;
    for (int i = 0; i < 20; i++)
    {
        for (int j = i+1; j < 20; j++)
        {
            if (arr[j] > arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }       
    }
    cout << "Tiga bilangan terbesar: \n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Nilai ke-" << i+1 << ": ";
        cout << arr[i] << endl;
    }
    
    return 0;
}