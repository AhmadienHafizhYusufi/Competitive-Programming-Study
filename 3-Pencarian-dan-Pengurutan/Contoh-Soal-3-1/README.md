# Sepatu untuk Bebek
Kwek, salah satu bebek Pak Dengklek akan segera merayakan ulang tahunnya. Pak Dengklek akan memberikan Kwek hadiah ulang tahun berupa sepatu. Terdapat N sepatu di toko. Sepatu ke-i memiliki ukuran sebesar hi. Pak Dengklek tahu bahwa ukuran kaki Kwek adalah sebuah bilangan bulat X. Karena N bisa jadi sangat besar, Pak Dengklek meminta bantuan kalian untuk mencari sepatu keberapa yang cocok dengan ukuran kaki Kwek. Bantulah dia!

## Batasan
- $1 \leq N \leq 10^5$
- $1 \leq X \leq 10^5$
- $1 \leq h_i \leq 10^5$, untuk $1 \leq i \leq N$

## Algoritma
1. Buat variable untuk jumlah sepatu (`N`), ukuran kaki (`X`), dan array untuk ukuran sepatu (`h`),
2. Input jumlah sepatu (`N`) dan ukuran kaki (`X`),
3. Loop sebanyak `N` kali untuk menginput ukuran sepatu pada array `h`,
4. Loop sebanyak `N` kali untuk mencari sepatu yang cocok dengan ukuran kaki `X`.

## Contoh Eksekusi
Misalkan `N = 5`, `X = 4`, dan `h = [3, 4, 2, 5, 1]`, maka:
### Inisialisasi
- `N = 5`
- `X = 4`
- `h = [3, 4, 2, 5, 1]`

### Iterasi 1
- `i = 0`, `h[i] = 3`, `h[i] != X`

### Iterasi 2
- `i = 1`, `h[i] = 4`, `h[i] == X`

Iterasi berhenti karena sepatu ke-2 cocok dengan ukuran kaki Kwek. Maka, output yang dihasilkan adalah `2`.