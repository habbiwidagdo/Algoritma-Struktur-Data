#include<iostream>
using namespace std;

bool isganjil(int n){
    if (n == 0)
    {
        return false;
    }
    else if (n == 1)
    {
        return true;
    }
    
    else if (n > 0)
    {
        return isganjil(n%2);
    }
    
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    bool result;
    result = isganjil(n);
    if (result == 1)
    {
        cout << "hasil: true";
    }
    else if (result == 0)
    {
        cout << "hasil: false";
    }
    
    return 0;
}