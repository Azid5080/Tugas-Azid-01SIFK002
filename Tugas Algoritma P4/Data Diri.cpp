#include<iostream>
#include<string>
using namespace std;

int main() {
	string nama, kelas, nim, umur;
	
	cout<<"Masukan Nama  : ";
	getline(cin, nama);
	
	cout<<"Masukan Kelas : ";
	cin >> kelas;
	
	cout<<"Masukan NIM   : ";
	cin >> nim;
	
	cout<<"Masukan Umur  : ";
	cin >> umur;
	
	cout<<"== Data Diri ==" << endl;
	cout<<"Nama  : " << nama << endl;
	cout<<"Kelas : " << kelas << endl;
	cout<<"NIM   : " << nim << endl;
	cout<<"Umur  : " << umur << endl;
	
	return 0;
}
