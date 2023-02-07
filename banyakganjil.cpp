#include<iostream>
using namespace std;

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
        if(data[j]%2==1){
            ganjil++;
        }else{
            genap++;
        }
    }

    cout<<"Banyaknya bilangan ganjil: "<<ganjil<<endl;
    cout<<"Banyaknya bilangan genap : "<<genap;

    return 0;
}
