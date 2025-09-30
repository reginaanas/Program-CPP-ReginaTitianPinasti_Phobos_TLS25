#include <iostream>
using namespace std;

int main() {
    int h = 5, k = 2, m = 14; // durasi lampu
    int totalWaktu;
    
    cout << "Jalan sampai detik ke - ";
    cin >> totalWaktu;

    int satuPutaran = h + k + m;

    for (int t = 1; t <= totalWaktu; t++) {
        int tmod = (t - 1) % satuPutaran + 1;
        
        cout << "Detik " << t << " : ";
        if (tmod <= h) {
            cout << "HIJAU" << endl;
        } else if (tmod <= h + k) {
            cout << "KUNING" << endl;
        } else {
            cout << "MERAH" << endl;
        }
    }
    return 0;
}
