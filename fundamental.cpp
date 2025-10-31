/*
Disini saya membicarakan mengenai perbedaan dari:

(method, function, konstruktor, variabel, dan fungsi)


*/ 

#include <iostream>
using namespace std;

// Class = cetakan / template untuk membuat objek
class Mobil {
public:
    string merek;   // <-- variabel (atau disebut 'data member')
    string warna;   // <-- variabel (properti objek)

    // Constructor = method khusus untuk membuat objek
    Mobil(string m, string w) {
        merek = m;
        warna = w;
    }

    // Method = fungsi yang dimiliki oleh class
    void tampilkanInfo() {
        cout << "Merek: " << merek << ", Warna: " << warna << endl;
    }
};

// Function = fungsi biasa di luar class
void sapaan() {
    cout << "Halo dari fungsi di luar class!" << endl;
}

int main() {
    // Memanggil function biasa
    sapaan();

    // Membuat objek (constructor otomatis dijalankan)
    Mobil mobilSaya("Toyota", "Hitam");

    // Memanggil method dari objek
    mobilSaya.tampilkanInfo();

    return 0;
}
