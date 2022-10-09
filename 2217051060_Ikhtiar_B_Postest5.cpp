#include<iostream>
using namespace std;

int main (){	
	//deklarasi matriks sebagai array multi dimensi berukuran 3x3, 3 baris (ke samping) dan 3 kolom (ke bawah)
	int matriks [3][3];
	//proses looping dari indeks array ke-0 sampai indeks ke-2
	for (int x=0; x<3; x++){
		for (int y=0; y<3; y++){
			//output instruksi pengisian elemen matriks
			cout<<"baris "<<x+1<<", kolom "<<y+1<<" = ";
			//input elemen dari setiap baris dan kolom
			cin>>matriks[x][y];
		}
		cout<<endl;
	}
	//output hasil matriks
	cout<<"Hasil Matriks = "<<endl;
	//inputan setiap elemen matriks yang tersimpan kemudian ditampilkan secara otomotatis dengan proses looping
	for (int x=0; x<3; x++){
		for (int y=0; y<3; y++){
			//output bentuk asli matriks
			cout<<matriks[x][y]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hasil Transpose = "<<endl;
	//pada case matriks 3x3 maka tidak perlu mengubah x < baris menjadi x < kolom, begitu juga dengan y < kolom menjadi y < baris
	for (int x=0; x<3; x++){
		for (int y=0; y<3; y++){
			//output matriks setelah ditranspose
			cout<<matriks[y][x]<<" ";
		}
		cout<<endl;
	}
	return 0;
	//I.A. Wicaksono (Ph.D)
}
