#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A;
    int N, temp,X;
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        cin>>temp;
        A.push_back(temp); // untuk memasukan ke baris terakhir
    }
    sort(A.begin(), A.end()); // sorting asc
    reverse(A.begin(), A.end()); // sort desc
    cin>>X;
    cout<<"frek : " << count(A.begin(), A.end(), X); //mencari berapa kali muncul
    auto it = find(A.begin(), A.end(), X); // auto untuk menentukan tipe data
    if (it != A.end()) { // it adalah iterator
        cout << "3 ditemukan di index: " << it - A.begin() << endl;
    }

    cout << "Size: " << A.size() << endl; // ukuran vector   
    cout << "First: " << A.front() << endl; // elemen pertama
    cout << "Last: " << A.back() << endl;   // elemen terakhir
    cout << "Index 1: " << A[1] << endl;    // index ke 1  
    cout << "Index 2 (safe): " << A.at(2) << endl; // bisa di bilang index ke i tergantung kebutuhan

    A.pop_back(); // menghapus elemen terakhir
    cout << "After pop_back, last: " << A.back() << endl;

    if (!A.empty()) { // cek kosong atau isi
        cout << "Vector is not empty.\n";
    }

    cout << "Jumlah total: " << accumulate(A.begin(), A.end(), 0) << endl; // kenapa 0 karna kita mulai menghitung dari 0

    A.clear(); // menghapus semua elemen
    cout << "Size after clear: " << A.size() << endl;
}