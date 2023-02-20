#include<iostream>
using namespace std;

int main(){
    int baris, kolom;
    cin>>baris>>kolom;
    float matriks[baris][kolom];

    for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            cin>>matriks[b][k];
        }
    }
    cout<<endl;
    for(int k=kolom-1; k>=0; k--){
        for(int b=0; b<baris; b++){
            cout<<matriks[b][k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int b=baris-1; b>=0; b--){
        for(int k=kolom-1; k>=0; k--){
            cout<<matriks[b][k]<<" ";
        }
        cout<<endl;
    }
}