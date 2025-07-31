#include <bits/stdc++.h>
using namespace std;

int main(){
    // queue memeiliki prinsip first in first out 
    int N,temp;
    cin>>N;
    queue<int>A;
    for (int i = 0; i < N; i++)
    {
        cin>>temp;
        A.push(temp);
    }
    cout << A.front() << endl;
    A.pop();
    cout << A.front() << endl;
}