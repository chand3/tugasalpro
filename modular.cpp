#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void garis () {
	cout<<"\n===========================================\n";
}
void inputdata () {
	char nama[30], alamat [30];
	cout<<"Masukan Nama  :  ";
	gets (nama);
	cout<<"Masukan Alamat  :  ";
	gets (alamat);
}

void HitungGaji () {
	int Gajipokok, tunjangan, total;
	cout<<"Masukan Gaji Pokok  :  ";
	cin>>Gajipokok;
	tunjangan=0.1*Gajipokok;
	total=Gajipokok+tunjangan;
	cout<<"Total Gaji yang diterima adalah :  "<<total;
}

main () {
cout<<"Menghitung Gaji Karyawan\n";
cout<<"Tunjangan sebesar 10% dari gaji pokok\n";
garis () ; //pemanggilan fungsi garis
inputdata () ; //pemanggilan fungsi input data
HitungGaji () ; //pemanggilan fungsi HitungGaji
garis () ; //pemanggilan fungsi garis
getch () ;
}

