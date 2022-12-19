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