#include <bits/stdc++.h>
using namespace std;

int main(){
    // stack bekerja dengan sistem LIFO atau last in first out
    int N,temp;
    cin>>N;
    stack<int>A;
    for (int i = 0; i < N; i++)
    {
        cin>>temp;
        A.push(temp); // tambah ke paling atas tumpukan
    }
    cout<< A.top(); // urutan terakhir
    A.pop(); // buang urutan terakhir
    cout<< A.top();
}