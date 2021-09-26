/*
File      : PerkalianMatrix.cpp
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 18 September 2021
Deskripsi : Program perkalian 2 matrix persegi dan menghitung banyaknya operasi
            aritmatika yang terjadi
*/

/* File Header */
#include <iostream>

using namespace std;

/* Driver */
int main() {
    //Kamus Global
    int N, i, j, k;
    int totalPerkalian, totalPenjumlahan;
    int Matrix1[100][100], Matrix2[100][100], Matrix3[100][100];

    //Algoritma
    cin >> N;   //Input ukuran dimensi N*N

    for (i=0; i<N; i++) {   //Input matrik pertama
        for (j=0; j<N; j++) {
            cin >> Matrix1[i][j];
        }
    }

    for (i=0; i<N; i++) {   //Input matrik kedua
        for (j=0; j<N; j++) {
            cin >> Matrix2[i][j];
        }
    }

    totalPerkalian = 0;
    totalPenjumlahan = 0;
    for (i=0; i<N; i++) {   //Perkalian matrik
        for (j=0; j<N; j++) {
            for (k=0; k<N; k++) {
                Matrix3[i][j] += Matrix1[i][k] * Matrix2[k][j];
                totalPerkalian += 1;    //Jumlah operasi perkalian
            }
            totalPenjumlahan += N-1;    //Jumlah operasi penjumlahan
            cout << Matrix3[i][j];
            printf(" ");
        }
        printf("\n");
    }
    cout << totalPerkalian + totalPenjumlahan;  //Total operasi aritmatika yang terjadi
}
