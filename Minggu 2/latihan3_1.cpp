#include<iostream>
using namespace std;

int loop(int n, int base){
    if (n == 0)
    {
        return n;
    }
    else if (n > 0)
    {
        int result = n - loop(n - 1, base);
        cout << n;
        if (n > 0 && n < base)
        {
            cout << "+";
        }
        
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int base = n;
    if (n <= 0)
    {
        cout << "Tidak dapat dihitung\n";
    }
    else if (n > 0)
    {
        loop(n, base);
    }
    return 0;
}