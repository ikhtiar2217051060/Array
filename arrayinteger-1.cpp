#include<iostream>
using namespace std;
/*array integer yang banyak elemen ditentukan oleh
terminal/user dan menampilkan isi arraynya*/
int main(){
    int jml;
    cin>>jml;
    int angka[jml];

    for(int x=0; x<jml; x++){
        cout<<"masukkan angka ke-"<<x+1<<": ";
        cin>>angka[x];
    }

    for(int x=0; x<jml; x++){
        cout<<angka[x]<<" ";
    }

    return 0;
}