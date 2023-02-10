#include<iostream>
#include<string>
using namespace std;
/*program mengecek berapa banyak huruf vokal dalam
beberapa kata/kalimat. */
int main(){
    int vokal=0; string kata; 
    getline(cin, kata);
    /*karena kata yang diinput lebih dari satu, maka
    menggunakan getline*/

    for(int i=0; i<=kata.length(); i++){
        if(kata[i]=='a'||kata[i]=='i'||kata[i]=='u'
        ||kata[i]=='e'||kata[i]=='o'){
            vokal++;
        }
    }
    /*menggunakan fungsi built-in length() untuk mengecek
    banyaknya elemen(huruf) dalam 1 kata*/
    cout<<"Banyaknya huruf vokal dalam kata tsb: "<<vokal;
    return 0;
}