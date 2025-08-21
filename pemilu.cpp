#include <bits/stdc++.h>
using namespace std;

/*
  ____ ___  ______   __  ____   _    ____ _____ _____        
 / ___/ _ \|  _ \ \ / / |  _ \ / \  / ___|_   _| ____|
| |  | | | | |_) \ V /  | |_) / _ \ \___ \ | | |  _|  
| |__| |_| |  __/ | |   |  __/ ___ \ ___) || | | |___ 
 \____\___/|_|____|_|   |_| /_/   \_\____/ |_| |_____|
 / ___|  _ \| ____\ \      / /                        
| |   | |_) |  _|  \ \ /\ / /                         
| |___|  _ <| |___  \ V  V /                          
 \____|_| \_\_____|  \_/\_/                           
  __
<(o )___
 ( ._> /
  `---'
  
*/
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ll a, b;
    cin >> a >> b;
    cout << lcm(a, b) << "\n";
}
