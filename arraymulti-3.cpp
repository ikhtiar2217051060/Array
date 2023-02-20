#include<iostream>
using namespace std;

typedef struct{
    int red;
    int green;
    int blue;
}piksel;
int main(){
    int baris;
    int kolom;
    cout<<"Masukkan jumlah baris: ";
    cin>>baris;
    cout<<"Masukkan jumlah kolom: ";
    cin>>kolom;
    piksel arr[baris][kolom];
    for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            arr[b][k].red=255;
            arr[b][k].green=255;
            arr[b][k].blue=255;
        }
    }
    arr[1][1].red=0;
    arr[1][1].green=255;
    arr[1][1].blue=0;
    for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            if((arr[b][k].red==255)&&(arr[b][k].green==255)&&(arr[b][k].blue==255)){
                cout<<" putih ";
            }else if((arr[b][k].red==0)&&(arr[b][k].green==255)&&(arr[b][k].blue==0)){
                cout<<" hijau ";
            }
        }
        cout<<endl;
    }
    return 0;
}