#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> w(n), v(n);
    
    for (int i = 0; i < n; i++){
        cin >> w[i] >> v[i];
    } 

    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int cap = 0; cap <= W; cap++) {
            dp[i][cap] = dp[i-1][cap]; // tidak ambil item i
            if (cap >= w[i-1]) {
                dp[i][cap] = max(dp[i][cap],
                                 dp[i-1][cap - w[i-1]] + v[i-1]);
            }
        }
    }
    

    cout << dp[n][W] << "\n"; // jawaban
}
