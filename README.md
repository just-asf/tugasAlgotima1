# 💻 Tugas Algoritma & Pemrograman (W01)

Repository ini berisi *source code* penyelesaian dua studi kasus algoritma menggunakan bahasa C. Program dirancang dengan antarmuka CLI yang interaktif, berwarna, dan validasi input yang aman.

## 👤 Identitas Mahasiswa
* **Nama:** Muhammad Ashfa
* **NIM:** 00000163244
* **Mata Kuliah:** Algoritma dan Pemrograman

---

## 📂 Deskripsi Program

### 1. Soal 1: Manipulasi String (Case Converter)
**File:** `W01_163244_T1.c`

Program utilitas untuk mengubah format huruf dalam kalimat tanpa menggunakan library bantuan seperti `<ctype.h>`. Menggunakan logika manipulasi ASCII manual.

**Fitur Unggulan:**
* ✅ **Uppercase:** Mengubah semua huruf menjadi kapital.
* ✅ **Lowercase:** Mengubah semua huruf menjadi kecil.
* ✅ **Switching Case:** Menukar format huruf (Besar ➜ Kecil, Kecil ➜ Besar).
* 🧠 **Logika Manual**: Konversi dilakukan murni menggunakan manipulasi nilai ASCII (-32 dan +32).

### 2. Soal 2: Kalkulator Matriks 3x3
**File:** `W01_163244_T2.c`

Program untuk melakukan operasi matematika pada dua buah matriks ordo 3x3 dengan tampilan visual yang rapi.

**Fitur Unggulan:**
* ✖️ **Perkalian Matriks:** Menghitung hasil kali dua matriks (Baris × Kolom).
* ➕ **Penjumlahan Matriks:** Menjumlahkan elemen pada posisi yang sama.
* 🔄 **Transpose Matriks:** Memutar posisi baris menjadi kolom.
* 👤 **User Friendly Input: User**: dipandu untuk memasukkan input agar tidak bingung.

---

## 🚀 Cara Menjalankan Program (Terminal)

Pastikan `gcc` sudah terinstall. Buka terminal di folder ini, lalu jalankan perintah berikut:

### 1️⃣ Menjalankan Soal 1 (String)
Compile dan run program string:
```bash
gcc W01_163244_T1.c -o string_app
./string_app
```

### 2️⃣ Menjalankan Soal 2 (Matriks)
Compile dan run program matriks:
```bash
gcc W01_163244_T2.c -o matrix_app
./matrix_app
```

---

🛠️ Catatan Teknis
* **Program ditulis menggunakan Bahasa C standar.**
* 🚨 **Validasi Input**: Setiap menu angka dilindungi oleh validasi scanf untuk mencegah program crash jika user menginput huruf.
* 🧩 **Modular**: Kode dipisah menjadi fungsi-fungsi kecil agar mudah dibaca (clean code).