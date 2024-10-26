# 🎓 Program Sederhana untuk Validasi dan Pemilihan Kondisi dalam C++

## 📋 Deskripsi Proyek
Proyek ini berisi tiga program sederhana yang ditulis dalam bahasa C++, dirancang untuk mempelajari dan mempraktikkan konsep pemilihan kondisi (conditional statements) menggunakan `if-else` dan operator ternary `? :`. Setiap program memiliki skenario yang berbeda, mulai dari validasi akses berdasarkan undangan dan dresscode, penentuan potongan biaya berdasarkan nilai IPK, hingga validasi tinggi badan untuk wahana hiburan. Program-program ini cocok bagi pemula yang ingin memahami dasar-dasar struktur kondisi dalam C++ sambil belajar praktik pengkodean yang rapi dan terstruktur.

### 🗂️ Daftar Program:
1. **Program Validasi Akses Berdasarkan Undangan dan Dresscode**
2. **Program Penentuan Potongan Biaya Berdasarkan IPK**
3. **Program Validasi Tinggi Badan untuk Wahana Hiburan**

---

## 🚀 Program-Program

### 1. Program Validasi Akses Berdasarkan Undangan dan Dresscode
Program ini mensimulasikan situasi di mana seorang tamu hanya diizinkan masuk jika mereka memiliki bukti undangan dan memenuhi dresscode yang ditentukan. Program akan:
- Meminta nama tamu.
- Meminta konfirmasi terkait bukti undangan dan dresscode.
- Memberikan pesan apakah tamu diizinkan masuk atau tidak, serta alasan jika tidak diizinkan.

**Fitur Utama:**
- Validasi akses menggunakan `if-else` dan operator ternary `? :`.
- Alasan ditampilkan dalam bentuk deskriptif jika akses ditolak.
  
📌 **Contoh Output:**
```plaintext
Siapa Nama Anda? John Doe
Bukti Undangan? (Ketik 1 Jika Benar) 0
Dresscode Sesuai? (Ketik 1 Jika Benar) 1
John Doe Tidak Boleh Masuk! Alasan: tidak ada bukti undangan.
```

### 2. Program Penentuan Potongan Biaya Berdasarkan IPK
Program ini dirancang untuk mengkalkulasi potongan biaya berdasarkan nilai IPK yang dimiliki oleh seorang mahasiswa, menggunakan struktur if-else. Program akan:

Meminta input nilai IPK dari pengguna.
Menentukan potongan yang diberikan berdasarkan IPK:
- IPK 4.0: Potongan 100%.
- IPK > 3.5: Potongan 50%.
- IPK ≥ 3.0: Potongan 25%.
- IPK < 3.0: Tidak ada potongan.
Menghitung total biaya setelah potongan.

#### Fitur Utama:
Penggunaan struktur if-else untuk menentukan persentase potongan.
Output yang menunjukkan potongan yang diperoleh dan total biaya yang harus dibayar.

📌 **Contoh Output:**
```plaintext
Program BEASISWA SPONSOR BILLGATES
Masukkan Nilai IPK: 3.6
Total Potongan: 1750000
Total Bayaran: 1750000
```

### 3. Program Validasi Tinggi Badan untuk Wahana Hiburan
Program ini akan menentukan apakah seseorang boleh menaiki wahana berdasarkan tinggi badan mereka. Dengan pendekatan sederhana:

Meminta input tinggi badan pengguna.
Memeriksa tinggi badan tersebut dan memberikan izin atau larangan untuk menaiki wahana, dengan syarat minimal tinggi badan adalah 160 cm.
Fitur Utama:

Implementasi operator ternary ? : untuk menghasilkan output izin atau larangan.
📌 **Contoh Output:**
```plaintext
Berapa Tinggi Anda? (Dalam Satuan CM) 155
Fadhil Tidak Boleh Menaiki Wahana
```

## 🛠️ Teknologi yang Digunakan
- **Bahasa**: C++
- **Compiler**: Mendukung GCC, Clang, atau compiler C++ lainnya.

## 🔍 Cara Menjalankan
1. Pastikan Anda memiliki compiler C++ yang sudah terpasang.
2. Clone repositori ini:
   ```bash
   git clone https://github.com/ReviDaerobi/QuizPrakC-/
   ```
3. Akses direktori:
   ```bash
   cd repo-name
   ```
4. Kompilasi dan jalankan masing-masing program sesuai kebutuhan:
   ```bash
   g++ program_nama.cpp -o program_nama
   ./program_nama
   ```

## 📚 Pembelajaran yang Diharapkan
Dengan proyek ini, pengguna diharapkan dapat memahami:

- Struktur if-else: Bagaimana menggunakan kondisi bertingkat untuk menentukan output.
- Operator Ternary: Cara menggunakan operator ternary untuk membuat kode yang lebih ringkas.
- Validasi Input Pengguna: Menangani dan menggunakan input pengguna dalam pengambilan keputusan sederhana.
- Pengkodean Bersih: Praktik terbaik dalam penulisan kode yang terstruktur dan mudah dibaca.

## 💡 Catatan
Kode ini berfokus pada konsep dasar dan ideal bagi pemula dalam dunia pemrograman, terutama mereka yang baru mengenal C++ dan ingin mempraktikkan konsep pemilihan kondisi dan validasi.

## 📝 Lisensi
Proyek ini dilisensikan di bawah MIT License - lihat file LICENSE untuk detail.

# MUHAMAD REVI DAEROBI / WannaBeGoodDev
