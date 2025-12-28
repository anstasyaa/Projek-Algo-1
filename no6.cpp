#include <iostream>
using namespace std;

void Konversi(int bilangan, int *jam, int *menit, int *detik);

int main() {
    int bilangan;
    int jam, menit, detik;

    cout << "bilangan (dalam detik) = ";
    cin >> bilangan;

    Konversi(bilangan, &jam, &menit, &detik);

    cout << bilangan << " detik = "
         << jam << " jam "
         << menit << " menit "
         << detik << " detik";

    return 0;
}

void Konversi(int bilangan, int *jam, int *menit, int *detik) {
    *jam = bilangan / 3600;
    bilangan %= 3600;

    *menit = bilangan / 60;
    bilangan %= 60;

    *detik = bilangan;
}
