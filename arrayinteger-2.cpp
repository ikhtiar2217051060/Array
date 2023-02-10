#include<iostream>
using namespace std;
/*program menghitung banyaknya bilangan ganjil dan
genap*/
int main(){
    int jml; 
    cout<<"Jumlah Data: ";

    cin>>jml; 
    int data[jml]; int ganjil=0; int genap=0;

    for(int i=0; i<jml; i++){
        cout<<"input data ke-"<<i+1<<": ";
        cin>>data[i];
    }

    for(int j=0; j<jml; j++){
        if(data[j]%2==1){ //jika sisa bagi sama dengan 1,
        //maka ganjil bertambah 1
            ganjil++;
        }else{
        //jika bukan, maka genap yang bertambah 1
            genap++;
        }
    }

    cout<<"Banyaknya bilangan ganjil: "<<ganjil<<endl;
    cout<<"Banyaknya bilangan genap : "<<genap;

    return 0;
}