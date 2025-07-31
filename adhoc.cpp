#include <bits/stdc++.h>
using namespace std;
//ad-hoc simple
int main(){
    int N[5] = {1,2,3,4,5};
    int ganjil = 0, genap = 0;
    for (int i = 0; i < 5; i++)
    {
        if (N[i] % 2 == 0)
        {
            genap++;
        }else 
        ganjil++;
    }
    cout<<genap<<endl;
    cout<<ganjil<<endl; 
}
