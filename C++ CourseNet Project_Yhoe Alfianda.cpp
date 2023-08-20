#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, alamat, kodePos, provinsi, nomorTelepon;
    
    cout << "Welcome to Course-Net" << endl;
    cout << "=====================" << endl;
    cout << "Masukkan nama lengkap anda : ";
    getline(cin, nama);
    cout << "Masukkan alamat anda : ";
    getline(cin, alamat);
    cout << "Masukkan kode pos anda : ";
    getline(cin, kodePos);
    cout << "Masukkan provinsi anda : ";
    getline(cin, provinsi);
    cout << "Masukkan nomor telefon anda : ";
    getline(cin, nomorTelepon);

    cout << endl << endl;

    cout << "Hello " << nama << "," << endl;
    cout << "List program pembelajaran yang tersedia [1 untuk ambil / 0 untuk tidak]:" << endl;
    
    int totalBiaya = 0;
    int harga[] = {500000, 1000000, 1500000, 2000000, 2500000};
    string program[] = {
        "Algoritma dan pemrograman (Rp. 500000)", 
        "Database System (Rp. 1000000)", 
        "Computer Network (Rp. 1500000)", 
        "OOP (Rp. 2000000)", 
        "Android (Rp. 2500000)"
    };
    
    for (int i = 0; i < 5; i++) {
        int pilihan;
        cout << program[i] << " : ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            totalBiaya += harga[i];
        }
    }

    cout << endl;
    cout << "Nama lengkap : " << nama << endl;
    cout << "Alamat : " << alamat << endl;
    cout << "Kode Pos : " << kodePos << endl;
    cout << "Provinsi : " << provinsi << endl;
    cout << "No. Telp : " << nomorTelepon << endl;
    cout << "Total Biaya Kursus : Rp. " << totalBiaya << ",-" << endl;
    cout << "Terima kasih telah bergabung dengan Course-Net !!" << endl;

    return 0;
}

