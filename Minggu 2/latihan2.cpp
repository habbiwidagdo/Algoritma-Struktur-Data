#include<iostream>
using namespace std;

int aneh(int c, int d){
    if (c > d)
    {
        return c*d;
    }
    else if (c < d)
    {
        return c-d;
    }
}

int main(){
    int a, b;
    cout << "Input A: ";
    cin >> a;
    cout << "Input B: ";
    cin >> b;
    cout << "Hasil: " << aneh(a, b);
    return 0;
}