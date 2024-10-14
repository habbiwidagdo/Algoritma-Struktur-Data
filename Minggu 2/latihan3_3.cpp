#include<iostream>
using namespace std;

int deretsegitiga(int n){
    if (n == 1)
    {
        return n;
    }
    else if (n > 0)
    {
        cout << n << " + ";
        return n + deretsegitiga(n - 1);
    }
    
}
int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int i = 1;
    int result = deretsegitiga(n);
    cout << endl << "hasil: " << result;
    return 0;
}