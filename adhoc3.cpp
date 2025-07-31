#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x;
    cin >> N;

    map<int, int> frek; // pakai map agar kita tahu setiap angka muncul berapa kali menggunakan frekuensi

    for (int i = 0; i < N; i++) {
        cin >> x;
        frek[x]++;
    }

    int unik = 0, duplikat = 0;
    for (auto e : frek) { // untuk otomatis mengetahui tipe data dan loop
        if (e.second == 1) unik++; // menghitung jumlah unik
        else duplikat++;
    }

    cout << "Unik: " << unik << endl;
    cout << "Duplikat: " << duplikat << endl;
}
