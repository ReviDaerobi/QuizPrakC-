// Nama : MUHAMAD REVI DAEROBI
// NPM : 065124039
// KELAS : B

#include <iostream> // Mengimpor library iostream untuk input dan output
#include <string> // Mengimpor library string untuk tipe data string

using namespace std; // Menggunakan namespace std agar tidak perlu menulis 'std::' sebelum cin dan cout

int main() { // Fungsi utama dari program

    string nama_tamu; // Deklarasi variabel string 'nama_tamu' untuk menyimpan nama pengguna
    bool bukti_undangan, dresscode, allowed; // Deklarasi variabel boolean untuk validasi bukti undangan dan dresscode

    // Mengatur nilai awal untuk 'bukti_undangan' dan 'dresscode' ke false
    dresscode = false;
    bukti_undangan = false;

    // Meminta pengguna memasukkan nama mereka, termasuk spasi jika ada
    cout << "Siapa Nama Anda? " << endl;
    getline(cin, nama_tamu); // Menggunakan getline untuk membaca nama lengkap yang mungkin mengandung spasi

    // Meminta pengguna mengonfirmasi apakah memiliki bukti undangan dengan mengetik 1 jika benar
    cout << "Bukti Undangan? (Ketik 1 Jika Benar)" << endl;
    cin >> bukti_undangan; // Membaca nilai bukti undangan dari pengguna (1 atau 0)

    // Meminta pengguna mengonfirmasi apakah mengikuti dresscode dengan mengetik 1 jika benar
    cout << "Dresscode Sesuai? (Ketik 1 Jika Benar)" << endl;
    cin >> dresscode; // Membaca nilai dresscode dari pengguna (1 atau 0)

    // Menggunakan operator logika '&&' untuk menentukan apakah pengguna diizinkan
    allowed = bukti_undangan && dresscode;

    // Menggunakan operator ternary untuk menghasilkan pesan awal pada variabel 'output'
    string output = allowed ? "Boleh Masuk" : "Tidak Boleh Masuk!";
    
    // Menambahkan alasan jika pengguna tidak diizinkan masuk
    if (!allowed) { // Jika 'allowed' bernilai false
        output += " Alasan: ";
        if (!bukti_undangan && !dresscode) {
            // Jika tidak ada bukti undangan dan dresscode tidak sesuai
            output += "tidak ada bukti undangan dan dresscode tidak sesuai.";
        } else if (!bukti_undangan) {
            // Jika hanya bukti undangan yang tidak ada
            output += "tidak ada bukti undangan.";
        } else if (!dresscode) {
            // Jika hanya dresscode yang tidak sesuai
            output += "dresscode tidak sesuai.";
        }
    }

    // Menampilkan hasil akhir dengan nama pengguna dan pesan output
    cout << nama_tamu << " " << output << endl;

    return 0; // Mengembalikan nilai 0, menandakan program berjalan sukses
}