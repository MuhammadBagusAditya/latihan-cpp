#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama_barang;
    int harga, jumlah;
    float diskon, jml_diskon, total_bayar;

    cout << "Nama barang: "; getline(cin, nama_barang);

    cout << "Harga: "; cin >> harga;
    cout << "Jumlah: "; cin >> jumlah;
    cout << "Diskon (%): "; cin >> diskon;

    jml_diskon = harga * jumlah * (diskon / 100);

    cout << "Jumlah diskon: " << jml_diskon << endl;

    total_bayar = jumlah * harga - jml_diskon;

    cout << "Total bayar: " << total_bayar << endl;

    return 0;
}
