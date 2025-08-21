#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int num = 2;               // mulai cek dari 2
    int primeCount = 0;        // menghitung urutan bilangan prima
    int printed = 0;           // sudah berapa yang dicetak

    while (printed < N) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeCount++;
            // cek apakah primeCount sesuai pola
            if ((primeCount - 1) % K == 0) {
                cout << num << " ";
                printed++;
                if (printed == N) break;
            }
        }

        num++;
    }

    cout << "\n";
    return 0;
}
