#include<iostream>
using namespace std;

int luasbs(int n){
    if (n == 1)
    {
        return n;
    }
    else if (n > 0)
    {
        int j = 2 * n - 1;
        return luasbs(n - 1) + j;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int result = luasbs(n);
    cout << "hasil: " << result;   
    return 0;
}