#include <conio.h>
#include <iostream>
using namespace std;

int main(){
int  jumlah,hasil=0;
string  indeks[100], ubah, hapus, cari;
ulang:
    cout << "\nMASUKAN JUMLAH DATA\t:";
    cin >> jumlah;
if (jumlah > 99 ){
    cout << "\nMAAF KELEBIHAN DATA [DATA EROR]";
    cout<<"\nKAMI AKAN MELAKUKAN PENGULANGAN PENCARIAN LAGI";
    goto ulang;
}
else {
    cout<<"\n\t=====DATA YANG DI MASUKAN BEBAS====";
    cout<<"\n\n\t=========[NAMA,NILAI DLL]==========";
for (int i = 0; i<jumlah; i++){

    cout << "\nMASUKAN DATA KE-" << i + 1 << " : ";
    cin >> indeks[i];
}
    cout << "\n\t****DATA YANG TELAH DI MASUKAN****";
for (int i = 0; i<jumlah; i++){
    cout << "\nDATA KE-[" << i << "]: " << indeks[i];
}
}
	cout << "\n\nMASUKAN DATA YANG AKAN DI UBAH\t:"; cin >> ubah;
for (int b = 0; b<jumlah; b++){
if (indeks[b] == ubah){
    cout << "MASUKAN DATA BARU\t:"; cin >> indeks[b];
}
}
	cout << "\n\n\t****DATA YANG TELAH DI UBAH****";
for (int c = 0; c<jumlah; c++){
    cout << "\nDATA KE-[" << c << "]:" << indeks[c];
}
	cout << "\n\nMASUKAN DATA YANG AKAN DI HAPUS\t:";
	cin >> hapus;
for (int j = 0; j < jumlah; j++){
if (hapus == indeks[j]){
for (int x = j; x < jumlah; x++){
    indeks[x] = indeks[x + 1];
}
    jumlah -= 1;
    break;
}
}
	cout << "\n\n****DATA YANG TIDAK DI HAPUS****:";
for (int y = 0; y<jumlah; y++){
    cout << "\nDATA KE-[" << y << "]: " << indeks[y];
}
	cout << "\n\nMASUKAN DATA YANG AKAN DI CARI\t:"; cin >> cari;
for (int n = 0; n<jumlah; n++) {
if (cari == indeks[n]) {
    cout << "\nDATA\t\t\t:"<< cari << "\nDI TEMUKAN DI INDEKS\t:" << n <<endl;
    hasil = 1;
    break;
}
}
if (hasil == 0) cout << "\nTIDAK DI TEMUKAN DATA";

}
