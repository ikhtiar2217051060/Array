#include<iostream>
using namespace std; 

int main(){
    int status=false;
    int search;
    int data[3][3];
    for(int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<3; kolom++){
            cin>>data[baris][kolom];
        }
    }
    cout<<"masukkan data yang dicari: ";
    cin>>search;
    for(int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<3; kolom++){
            if(data[baris][kolom]==search){
                status=true;
                cout<<"Data ditemukan pada baris ke-"<<baris+1<<" kolom ke-"<<kolom+1;
                break;
            }
        }
    }
    if(status==false){
        cout<<"Data tidak ditemukan: ";
    }


    return 0;
}