#include<iostream>
#include<string>
using namespace std;
/*program menampilkan isi array string dengan pola tangga
menggunakan spasi. dimana banyaknya spasi bergantung
pada banyaknya huruf dalam setiap kata ditambah
dengan kata sebelumnya*/
int main(){
    int jml;
    cin>>jml;
    string kata[jml];

    for(int i=0; i<jml; i++){
        cin>>kata[i];
    }
    //karena kata pertama belum dicetak, maka spasi=0
    int spasi=0;
    
    for(int j=0; j<jml; j++){
        for(int k=0; k<spasi; k++){
            cout<<" ";
        }
        cout<<kata[j]<<endl;
        /*setelah kata pertama dicetak, maka jumlah
        spasi menjadi banyaknya huruf di kata yang sudah
        dicetak*/
        spasi+=kata[j].length();
    }
    return 0;
}