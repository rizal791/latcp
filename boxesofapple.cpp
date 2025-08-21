#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int N, A,jwb=0;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>A;
        jwb +=A;
    }
    cout<<jwb;
}