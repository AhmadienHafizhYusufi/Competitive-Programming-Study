# Sequential Search

**Sequetial search**, juga dikenal sebagai **linear search**, adalah metode
pencarian di mana setiap elemen dalam daftar diperiksa satu per satu dari awal
hingga akhir sampai elemen yang dicari ditemukan atau seluruh daftar telah
diperiksa.

- Data untuk pencarian **tidak perlu terurut**.
- Kompleksitasnya **O(N)**, dengan N adalah ukuran data.
- Baik diimplementasikan jika pencarian hanya dilakukan **sesekali**.

## Langkah-langkah Membuat Sequential Search

1. Definisikan Fungsi: Buat fungsi `sequentialSearch` yang menerima dua
   parameter: vector data yang berisi elemen-elemen yang akan dicari, dan key
   yang merupakan elemen yang dicari.
2. Iterasi Melalui Elemen: **Gunakan loop** untuk iterasi melalui **setiap
   elemen** dalam vector data.
3. Perbandingan Elemen: Pada setiap iterasi, **bandingkan elemen saat ini dengan
   key**. Jika elemen saat ini sama dengan key, cetak pesan bahwa data ditemukan
   dan kembalikan dari fungsi.
4. Data Tidak Ditemukan: Jika loop selesai dan elemen tidak ditemukan, cetak
   pesan bahwa data tidak ditemukan.

## Contoh

### Input Data:

```c++
N = 5
X = 7
h = [9, 1, 5, 3, 7]
```

### Inisialisasi Sequetial Search:

```c++
i = 0
```

### Iterasi 1:

- Bandingkan `data[0] = 9` dengan `key = 7`, `9 != 7`
- Perbarui `i = 1`

### Iterasi 2:

- Bandingkan `data[1] = 1` dengan `key = 7`, `1 != 7`
- Perbarui `i = 2`

### Iterasi 3:

- Bandingkan `data[2] = 5` dengan `key = 7`, `5 != 7`
- Perbarui `i = 3`

### Iterasi 4:

- Bandingkan `data[3] = 3` dengan `key = 7`, `3 != 7`
- Perbarui `i = 4`

### Iterasi 5:

- Bandingkan `data[4] = 7` dengan `key = 7`, `7 = 7`
- Elemen ditemukan, cetak: `Data ditemukan pada index ke-4`

# Binary Search

**Binary search** adalah metode pencarian yang efisien untuk menemukan elemen
dalam daftar yang sudah terurut. Algoritma ini bekerja dengan membagi daftar
menjadi dua bagian dan membandingkan elemen tengah dengan elemen yang dicari.
Jika elemen yang dicari lebih kecil dari elemen tengah, pencarian dilanjutkan
pada setengah bagian kiri, dan sebaliknya.

- Data untuk pencarian **harus terurut**.
- Kompleksitasnya **O(log N)**.
- Baik diimplementasikan jika pencarian perlu dilakukan **berkali-kali**.

## Langkah-langkah Membuat Binary Search

1. Definisikan Fungsi: Buat fungsi `binarySearch` yang menerima dua parameter:
   vector data yang berisi elemen-elemen yang akan dicari, dan key yang
   merupakan elemen yang dicari.
2. Inisialisasi Batas Pencarian: Inisialisasi dua variabel, `left` dan `right`,
   yang masing-masing menunjuk ke **indeks awal** dan **akhir** dari vector
   data.
3. Iterasi Melalui Elemen: **Gunakan loop while** untuk iterasi selama **left
   kurang dari atau sama dengan right**.
4. Hitung Indeks Tengah: Hitung indeks tengah **mid sebagai (left + right) /
   2**.
5. Perbandingan Elemen:
   - Jika elemen pada indeks mid sama dengan key, cetak pesan bahwa data
     ditemukan dan kembalikan dari fungsi.
   - Jika elemen pada indeks mid lebih kecil dari key, perbarui left menjadi
     mid + 1.
   - Jika elemen pada indeks mid lebih besar dari key, perbarui right menjadi
     mid - 1.
6. Data Tidak Ditemukan: Jika loop selesai dan elemen tidak ditemukan, cetak
   pesan bahwa data tidak ditemukan.

## Contoh

### Input Data:

```c++
N = 5
X = 7
h = [1, 3, 5, 7, 9]
```

### Inisialisasi Binary Search:

```c++
left = 0
right = 4
```

### Iterasi 1, Karena left <= right (0 <= 4):

- Hitung `mid`:

```c++
mid = (0 + 4) / 2 = 2
```

- Karena `mid = 2` maka `data[2] = 5` diambil dari `h(5) = [1, 3, '5', 7, 9]`.
- Gunakan kondisi `data[2] < key` karena `5 < 7`. Sehingga
- Perbarui nilai `left`:

```c++
left = mid + 1 = 2 + 1 = 3
```

### Iterasi 2, Karena left <= right (3 <= 4):

- Hitung `mid`

```c++
mid = (3 + 4) / 2 = 3
```

- Karena `mid = 3` maka `data[3] = 7` diambil dari `h(5) = [1, 3, '5', 7, 9]`.
- Gunakan kondisi `data[3] = key` karena `7 = 7`.
- Elemen ditemukan, cetak: `Data ditemukan pada index ke-3`.
