#include <bits/stdc++.h>
using  namespace std;

int main(){
    int N,A,B,C;
    cin>>N>>A>>B>>C;
    if ((N%A==0&&N%B!=0)||(N%C==0))
    {
        cout<<"YES"<<endl;
    }else
    cout<<"NO"<<endl;
    
}
