#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,temp;
    cin>>T;
    vector<int>div;
    vector<int>hasil;

    for (int i = 0; i < T; i++){
        cin>>temp;
        div.push_back(temp);
    }

    temp = 0;

    for (int i = 0; i < T; i++){
        for (int j = 1; j <= div[i]; j++){
            if ((div[i]%j) == 0){
                temp +=j;
            }
        }
        hasil.push_back(temp);
        temp = 0;
    }
    
    for (int i = 0; i < T; i++)
    {
        cout<<hasil[i]<<endl;
    }
    
  
    
    
}