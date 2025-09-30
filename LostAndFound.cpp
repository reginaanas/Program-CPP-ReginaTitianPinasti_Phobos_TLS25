#include <iostream>
#include <vector>
using namespace std;

string customReverse(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++; j--;
    }
    return s;
}

int main() {
    string awal;
    cout << "Masukkan kata awal: ";
    cin >> awal;

    string balik = customReverse(awal);

    vector<int> ascii(balik.length());
    for (int i = 0; i < balik.length(); i++) {
        ascii[i] = (int)balik[i] + 7;
    }

    string tambah = "";
    for (int val : ascii) {
        tambah += (char)val;
    }

    string kurang = "";
    for (char c : tambah) {
        kurang += (char)((int)c - 7);
    }

    string akhir = customReverse(kurang);

    cout << "Kata Sandi (enkripsi): " << tambah << endl;
    cout << "Kata Asli: " << akhir << endl;

    return 0;
}
