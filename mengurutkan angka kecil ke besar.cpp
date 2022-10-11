#include<iostream>
using namespace std;

int main(){
	int jml_data, storage;
	cout<<"Banyanknya data = ";
	cin>>jml_data;
	int data[jml_data];
	for (int x=0; x<jml_data; x++){
		cout<<"Data ke-"<<x+1<<" = ";
		cin>>data[x];
	}
	for (int y=0; y<jml_data; y++){
		for (int z=y+1; z<jml_data; z++){
			if (data[z]<data[y]){
				storage=data[y];
				data[y]=data[z];
				data[z]=storage;
			}
		}
	}
	cout<<"Data setelah diurutkan : ";
	for (int p=0; p<jml_data; p++){
		cout<<data[p]<<" ";
	}
	return 0;
	//I.A. WIcaksono (Ph.D)
}
