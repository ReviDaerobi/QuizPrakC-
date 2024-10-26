// Nama : MUHAMAD REVI DAEROBI
// NPM : 065124039
// KELAS : B

#include <iostream> // Mengimpor library iostream untuk input dan output

using namespace std; // Menggunakan namespace std agar tidak perlu menulis 'std::' sebelum cin dan cout

int main() { // Fungsi utama dari program, eksekusi program dimulai dari sini

    int tinggi; // Deklarasi variabel integer 'tinggi' untuk menyimpan tinggi pengguna dalam satuan cm
    bool allowed; // Deklarasi variabel boolean 'allowed' untuk menyimpan hasil logika apakah pengguna diizinkan atau tidak

    // Meminta pengguna memasukkan tinggi badan
    cout << "Berapa Tinggi Anda? (Dalam Satuan CM)" << endl;
    cin >> tinggi; // Mengambil input dari pengguna dan menyimpannya di variabel 'tinggi'

    // Menggunakan operator ternary untuk menentukan apakah pengguna boleh menaiki wahana atau tidak
    // Jika tinggi lebih besar atau sama dengan 160, output adalah "Boleh Menaiki Wahana"
    // Jika tinggi kurang dari 160, output adalah "Tidak Boleh Menaiki Wahana"
    string output = tinggi >= 160 ? "Boleh Menaiki Wahana" : "Tidak Boleh Menaiki Wahana";

    // Menampilkan hasil akhir dengan nama pengguna (misalnya, "Fadhil")
    cout << "Fadhil " << output;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai berjalan dengan sukses
}
