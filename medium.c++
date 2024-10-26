// Nama : MUHAMAD REVI DAEROBI
// NPM : 065124039
// KELAS : B

#include <iostream> // Mengimpor library iostream untuk input dan output

using namespace std; // Menggunakan namespace std agar tidak perlu menulis 'std::' sebelum cin dan cout

int main() { // Fungsi utama program, di mana eksekusi dimulai

    float ipk; // Deklarasi variabel 'ipk' untuk menyimpan nilai IPK mahasiswa dalam tipe float (angka desimal)
    int total_potongan, total_pembayaran; // Deklarasi variabel untuk menyimpan total potongan dan total pembayaran

    total_pembayaran = 3500000; // Menginisialisasi variabel 'total_pembayaran' dengan nilai 3.500.000

    // Menampilkan judul program kepada pengguna
    cout << "Program BEASISWA SPONSOR BILLGATES" << endl;

    // Meminta pengguna untuk memasukkan nilai IPK
    cout << "Masukkan Nilai IPK: ";
    cin >> ipk; // Menerima input nilai IPK dari pengguna

    // Menggunakan struktur kendali if-else untuk menentukan potongan berdasarkan IPK
    if (ipk == 4.0) {
        // Jika IPK adalah 4.0 (nilai sempurna), potongan adalah 100% (seluruh total pembayaran)
        total_potongan = total_pembayaran;
    } else if (ipk > 3.5) {
        // Jika IPK lebih dari 3.5, potongan adalah 50% dari total pembayaran
        total_potongan = total_pembayaran / 2;
    } else if (ipk >= 3.0) {
        // Jika IPK di antara 3.0 hingga 3.5, potongan adalah 25% dari total pembayaran
        total_potongan = total_pembayaran / 4;
    } else {
        // Jika IPK kurang dari 3.0, tidak ada potongan
        total_potongan = 0;
    };

    // Menghitung total pembayaran setelah dipotong dengan mengurangkan 'total_potongan' dari 'total_pembayaran'
    total_pembayaran -= total_potongan;

    // Menampilkan hasil akhir kepada pengguna
    cout << "Total Potongan : " << total_potongan << endl; // Menampilkan jumlah potongan
    cout << "Total Bayaran : " << total_pembayaran << endl; // Menampilkan total yang harus dibayar setelah potongan

    return 0; // Mengembalikan nilai 0 menandakan program selesai dengan sukses
}