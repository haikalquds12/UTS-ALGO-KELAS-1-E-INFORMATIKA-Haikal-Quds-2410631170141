#include <iostream>
#include <string>

using namespace std;

 (float nilaiAkhir) {
    if (nilaiAkhir >= 85 && nilaiAkhir < 100) {
        return 'A';
    } else if (nilaiAkhir >= && nilaiAkhir < 85) {
        return 'B';
    } else if (nilaiAkhir >= 75 && nilaiAkhir < 80) {
        return 'C';
    } else if (nilaiAkhir >= 70 && nilaiAkhir < 75) {
        return 'D';
    } else if (nilaiAkhir >= 70) {
        return 'E';
    }
}

int main() {
    string nama, npm;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS;


    cout << "Masukkan Nama: ";
    (cin, nama);
    cout << "Masukkan NPM: ";
    (cin, npm);
    cout << "Masukkan Nilai Absen: ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;


    float nilaiAkhir = (nilaiAbsen * 0.1) + (nilaiTugas * 0.2) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);


    char = tentukanHurufMutu(nilaiAkhir);


    cout << "\n=== Hasil ===" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
