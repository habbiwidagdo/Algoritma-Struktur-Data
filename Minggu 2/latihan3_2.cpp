#include<iostream>
using namespace std;

int loop(int n, int base){
    if (n == 0)
    {
        return n;
    }
    else if (n > 0)
    {
        int panggil = n-loop(n-2,base);
        cout << n;
        if (n > 0 && n < base)
        {
            cout << "+";
        }
        // else if (n == base)
        // {
        //     cout << "=" << su;
        // }
        return panggil;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int base = n * 2;
    if (n <= 0)
    {
        cout << "Tidak dapat dihitung\n";
    }
    else if (n > 0)
    {
        loop(n*2, base);
    }
    return 0;
}