#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,temp;
    cin>>N;
    set<int>A;
    for (int i = 0; i < N; i++)
    {
        cin>>temp;
        A.insert(temp);
    }
    cout<<"min : "<< *A.begin();
    cout<<"max : "<< *A.rbegin();
    cout<<"rejul"<<endl;
}