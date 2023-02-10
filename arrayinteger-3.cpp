#include<iostream>
using namespace std;
/*Program searching isi elemen dari setiap array*/
int main(){
    int jml;
    cin>>jml;
    int data[jml];
    int search;

    for(int i=0; i<jml; i++){
        cout<<"Masukkan data ke-"<<i+1<<": ";
        cin>>data[i];
    }
    cout<<"\nMasukkan data yang dicari: ";
    cin>>search;

    for(int i=0; i<jml; i++){
        if(data[i]==search){
            cout<<"Data ditemukan di data ke-"<<i+1
            <<": "<<data[i];
            break;
        }
/*Jika isi array=search, stop looping dan tampilkan isi array*/
    }
    return 0;
}