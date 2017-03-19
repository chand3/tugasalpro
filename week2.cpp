#include <iostream>
using namespace std;




int main () {

	int JumlahMahasiswa = 0, MahasiswaLulus = 0, MahasiswaTidakLulus = 0;
	
	float IP, Total = 0, Rata;
	cout << "Masukan Nilai IP: ";
	cin >> IP;
	while(IP > -999){
		if(IP>=0 && IP<=4){
		JumlahMahasiswa++;
		Total = Total + IP;
		if(IP>=2.75){
		MahasiswaLulus++;
		
		} else {
		MahasiswaTidakLulus++;
		}
	}
		cout << "Masukan Nilai IP: ";
		cin >> IP;
		
	}
	
	
cout << endl;
cout << "Jumlah Mahasiswa : " << JumlahMahasiswa << endl;
cout << "Jumlah Mahasiswa Lulus : " << MahasiswaLulus << endl;
cout << "Jumlah Mahasiswa Tidak Lulus : " << MahasiswaTidakLulus << endl;
Rata = Total / JumlahMahasiswa;
cout << "Rata - Rata IP : " << Rata;
	return 0;
}
