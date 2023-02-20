#include<iostream>
using namespace std;

int main(){
    int baris;
    int kolom;
    cout<<"Masukkan jumlah baris: ";
    cin>>baris;
    cout<<"Masukkan jumlah kolom: ";
    cin>>kolom;
    int matriks1[baris][kolom];
    int matriks2[baris][kolom];
    int matriks3[baris][kolom];
    
    for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            cin>>matriks1[b][k];
        }
    }
     for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            cin>>matriks2[b][k];
        }
    }
     for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            if(matriks1[b][k]>matriks2[b][k]){
                matriks3[b][k]=matriks1[b][k];
            }else{
                matriks3[b][k]=matriks2[b][k];
            }
        }
    }
     for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            cout<<matriks3[b][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}