#include <iostream>
using namespace std;

const int BARIS = 3;
const int KOLOM = 3;

// Fungsi untuk menampilkan array 2D
void tampilkanArray(int arr[BARIS][KOLOM], string nama) {
    cout << "Isi array " << nama << ":" << endl;

    for (int i = 0; i < BARIS; i++) {
        for (int j = 0; j < KOLOM; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}

// Fungsi untuk menukar isi array pada posisi tertentu
void tukarPosisiArray(
    int arr1[BARIS][KOLOM],
    int arr2[BARIS][KOLOM],
    int baris,
    int kolom
) {
    if (baris >= 0 && baris < BARIS &&
        kolom >= 0 && kolom < KOLOM) {

        int temp = arr1[baris][kolom];

        arr1[baris][kolom] = arr2[baris][kolom];
        arr2[baris][kolom] = temp;

        cout << "Tukar pada posisi ["
             << baris << "][" << kolom
             << "] berhasil." << endl;
    }
    else {
        cout << "Posisi tidak valid!" << endl;
    }
}

// Fungsi untuk menukar nilai menggunakan pointer
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {

    // Array A
    int arrayA[BARIS][KOLOM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Array B
    int arrayB[BARIS][KOLOM] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Variabel untuk pointer
    int x = 100;
    int y = 200;

    int *ptr1 = &x;
    int *ptr2 = &y;


    // ==============================
    // MENAMPILKAN ARRAY AWAL
    // ==============================

    cout << "=== SEBELUM TUKAR ===" << endl;

    tampilkanArray(arrayA, "A");
    tampilkanArray(arrayB, "B");


    // ==============================
    // MENUKAR ARRAY
    // ==============================

    cout << "--- Menukar array pada posisi [1][2] ---" << endl;

    tukarPosisiArray(arrayA, arrayB, 1, 2);


    // ==============================
    // MENAMPILKAN ARRAY SETELAH DITUKAR
    // ==============================

    cout << endl;
    cout << "=== SETELAH TUKAR POSISI ARRAY ===" << endl;

    tampilkanArray(arrayA, "A");
    tampilkanArray(arrayB, "B");


    // ==============================
    // POINTER SEBELUM DITUKAR
    // ==============================

    cout << "=== POINTER SEBELUM TUKAR ===" << endl;

    cout << "Nilai ptr1 = " << *ptr1 << endl;
    cout << "Nilai ptr2 = " << *ptr2 << endl;


    // ==============================
    // MENUKAR POINTER
    // ==============================

    cout << endl;
    cout << "--- Menukar isi pointer ---" << endl;

    tukarPointer(ptr1, ptr2);


    // ==============================
    // POINTER SETELAH DITUKAR
    // ==============================

    cout << endl;
    cout << "=== POINTER SETELAH TUKAR ===" << endl;

    cout << "Nilai ptr1 = " << *ptr1 << endl;
    cout << "Nilai ptr2 = " << *ptr2 << endl;


    return 0;
}