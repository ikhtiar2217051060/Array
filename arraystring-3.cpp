#include<iostream>
#include<string>
using namespace std;
/*program menghitung banyaknya huruf A/a dalam beberapa
kata*/
int main(){
    string kata[100];
    int jml_kata; int jml_A=0;
    
    cin>>jml_kata;

    for(int x=0; x<jml_kata; x++){
        cin>>kata[x];
    }

    for(int y=0; y<jml_kata; y++){
        for(int z=0; z<kata[y].length(); z++){
            if(kata[y][z]=='A'||kata[y][z]=='a'){
                jml_A++;
            }
        }
    }
    /*kata[x][y] artinya kata ke-x dan elemen huruf ke-y*/
    //fungsi length() untuk mengecek banyaknya huruf/elemen
    cout<<"Banyaknya huruf A/a : "<<jml_A++;
}