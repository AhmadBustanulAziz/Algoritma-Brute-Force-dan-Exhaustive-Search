/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 18 September 2021
Deskripsi : Program pendeteksi penyebaran virus covid-19
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    //Kamus Global
    int Garis[100], i, N, j, k, l, temp1;
    int infeksi, infeksiMinimal, infeksiMaksimal;
    int infeksiArray[100];

    //Algoritma
    cin >> N;

    for (i=0;i<N;i++) { //Input
        cin >> Garis[i];
    }

    for (j=0;j<N;j++) {
        temp1 = Garis[j];
        infeksi = 1;
        for (k=j;k>0;k--) {
            if (k>0) {
                if ((temp1 - Garis[k-1]) <= 2) {    //Apabila jarak 1 orang dengan orang lain adalah <= 2, maka keduanya terinfeksi
                    temp1 = Garis[k-1];
                    infeksi++;
                }
            }
        }
        temp1 = Garis[j];
        for (l=j;l<N-1;l++) {
            if (l<N-1) {
                if (abs(temp1 - Garis[l+1]) <= 2) { //Apabila jarak 1 orang dengan orang lain adalah <= 2, maka keduanya terinfeksi
                    temp1 = Garis[l+1];
                    infeksi++;
                }
            }

        }
        infeksiArray[j] = infeksi;
    }

    infeksiMinimal = infeksiArray[0];
    infeksiMaksimal = infeksiArray[0];

    for (i=0; i<N; i++) {   //Menentukan kemungkinan terkecil dan terbesar yang terinfeksi covid 19
        if (infeksiMinimal > infeksiArray[i]) {
            infeksiMinimal = infeksiArray[i];
        }

        if (infeksiMaksimal < infeksiArray[i]) {
            infeksiMaksimal = infeksiArray[i];
        }
    }

    cout << infeksiMinimal;
    printf(" ");
    cout << infeksiMaksimal;
}
