# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br> Nama		: Fitran Alfian Nizar
<br>NIM		:	1227050047
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Program ini adalah program untuk mencari nilai di dalam matriks yang bisa dibagi oleh 3, 5, atau 7.
<br>Jika nilai tidak bisa dibagi 3, 5, atau 7, maka akan diganti dengan 0.
<br>Berikut adalah code dan output dari program.
## Source Code

```
#include <iostream>

using namespace std;

void check357();

int main(){
	check357();
}

void check357() {
	int kol, bar;
	cout<<"Masukan Jumlah Baris: ";
	cin>>bar;
	cout<<"Masukan Jumlah Kolom: ";
	cin>>kol;
	int mat[bar][kol];
	//input
	for (int i=0;i<bar;i++){
		for (int j=0;j<kol;j++){
			cout<<"Masukan Data: ";
			cin>>mat[i][j];
		}
	}
	//check for 3,5,or 7
	for (int i=0;i<bar;i++){
		for (int j=0;j<kol;j++){
			if (mat[i][j]%3==0){
				mat[i][j]=mat[i][j];
			}
			else if (mat[i][j]%5==0){
				mat[i][j]=mat[i][j];
			}
			else if (mat[i][j]%7==0){
				mat[i][j]=mat[i][j];
			}
			else {
				mat[i][j]=0;
			}		
	}
}	//output
	cout<<"Data Yang Habis Dibagi 3,5, atau 7: "<<endl;
	for (int i=0;i<bar;i++){
		for (int j=0;j<kol;j++){
			if (mat[i][j]!=0){
				cout<<mat[i][j]<<" ";
			}
			else {
				continue;
			}
		}
	}	
}
```
## Output
<p>Output Dari Code:</p>
<img src="https://github.com/RaidenXVR/UAS-Semester-1-Soal-2/blob/main/Screenshot%20(814).png">
