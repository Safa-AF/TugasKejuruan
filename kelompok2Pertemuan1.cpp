#include <iostream>

using namespace std;

int main() {

    int i, n, t;

    cout << "masukkan anggka awal: ";
    cin >> n;

    cout << "masukkan angka akhir: ";
    cin >> i;

    cout << endl;

    for (i; i>=n; i--) {
        if (i%2 == 1) {
            cout << i << " ";
            t += i;
        }
    }

    cout << "\ntotal : " << t << endl;
    return 0;
}
