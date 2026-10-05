#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    const int MAX = 10;
    Mahasiswa mhs[MAX];
    int n;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\n--- Data Mahasiswa ke-" << (i + 1) << " ---" << endl;
        cout << "Nama  : "; cin >> mhs[i].nama;
        cout << "NIM   : "; cin >> mhs[i].nim;
        cout << "UTS   : "; cin >> mhs[i].uts;
        cout << "UAS   : "; cin >> mhs[i].uas;
        cout << "Tugas : "; cin >> mhs[i].tugas;

        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n========== DAFTAR NILAI MAHASISWA ==========" << endl;
    cout << "No\tNama\tNIM\tUTS\tUAS\tTugas\tNilai Akhir" << endl;
    cout << "------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << "\t"
             << mhs[i].nama << "\t"
             << mhs[i].nim << "\t"
             << mhs[i].uts << "\t"
             << mhs[i].uas << "\t"
             << mhs[i].tugas << "\t"
             << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}
