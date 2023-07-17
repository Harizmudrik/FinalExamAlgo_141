// uasalgoritma_141.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA =;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

//isi disini    
void tambahMahasiswa(
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);        
        cout << "Jurusan : ";
        getline(cin, jurusan[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";    
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditambahkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
);

//isi disini
void tampilkanSemuaMahasiswa(
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Jurusan : ";
        getline(cin, jurusan[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditampilkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
);


//isi disini
void algorithmacariMahasiswaByNIM();
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Jurusan : ";
        getline(cin, jurusan[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil dicari!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
    );
//isi disini
void algorithmaSortByTahunMasuk();
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Jurusan : ";
        getline(cin, jurusan[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditambahkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
    );


int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            q.tampilkanSemuaMahasiswa();
            break;

        case 2:
            q.algorithmacariMahasiswaByNIM();
            break;

        case 3:
            q.algorithmaSortByTahunMasuk();
            break;
        case 4:
            return 0;
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);
    return 0;
}


//2. Algoritma StackArray, Queues, dan Binarysearchtree. 
//3. Perbedaan mendasar algorithma stack dan queue, kalau Stack Item terakhir yang dimasukkan ke dalam tumpukan adalah item pertama yang akan dihapus (Last In First Out), Queues elemen-elemennya disisipkan di ujung belakang dan dihapus dari depan.
//4. Algorithma stack digunakan pada saat Panggilan fungsi, mempertahankan daftar UNDO dan memeriksa tanda kurung.
//5. a.  4
//   b. inorder 







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
