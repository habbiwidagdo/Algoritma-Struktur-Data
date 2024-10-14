#include<iostream>
using namespace std;

int avg(int n, int bil[]){
    int sum = 0;
    int i = 0;
    while (i < n)
    {
        sum += bil[i];
        i++;
    }
    int avg = sum/n;
    return avg;
}

int main(){
    int n = 3;
    int bil[n];
    int sum = 0;
    cout << "Input: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> bil[i];
    }
    cout << "AVG: " << avg(n, bil);
    return 0;
}