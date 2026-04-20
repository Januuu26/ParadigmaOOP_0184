#include <iostream>
using namespace std;

class barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData() {
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }

};

int main() {
    barang elektronik;
    elektronik.nama = "handphone";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "206-04-20";
    elektronik.printData();
    cout << endl;

    barang NonElektronik;
    NonElektronik.nama = "Meja";
    NonElektronik.jumlah = 5;
    NonElektronik.kategori = "Non Elektronik";
    NonElektronik.tanggalProduksi = "2026-04-20";
    NonElektronik.printData();
}