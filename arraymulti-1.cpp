#include<iostream>
using namespace std;

int main(){
    int matriks1[3][2];
    int matriks2[2][3];
    int matriks3[3][3];

    for(int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<2; kolom++){
            cout<<"Matriks1 baris "<<baris+1<<", kolom "<<kolom+1<<": ";
            cin>>matriks1[baris][kolom];
        }
    }
    cout<<endl;
    for(int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<2; kolom++){
            cout<<matriks1[baris][kolom]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int baris=0; baris<2; baris++){
        for(int kolom=0; kolom<3; kolom++){
            cout<<"Matriks2 baris "<<baris+1<<", kolom "<<kolom+1<<": ";
            cin>>matriks2[baris][kolom];
        }
    }
    cout<<endl;
    for(int baris=0; baris<2; baris++){
        for(int kolom=0; kolom<3; kolom++){
            cout<<matriks2[baris][kolom]<<" ";
        }
        cout<<endl;
    }
    for(int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<3; kolom++){
            matriks3[baris][kolom]=0;
            for(int jumlah_kali=0; jumlah_kali<2; jumlah_kali++){
                matriks3[baris][kolom]=matriks3[baris][kolom]+
                matriks1[baris][jumlah_kali]*
                matriks2[jumlah_kali][kolom];
            }
        }
    }
    cout<<endl;
    for(int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<3; kolom++){
            cout<<matriks3[baris][kolom]<<" ";
        }
        cout<<endl;
    }
}