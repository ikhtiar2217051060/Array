#include<iostream>
using namespace std;

int main(){
    int jml;
    cin>>jml;
    int nilai[jml];

    for(int i=0; i<jml; i++){
        cout<<"input nilai ke-"<<i+1<<": ";
        cin>>nilai[i];
    }
    int minimal=9999;

    for(int j=0; j<jml; j++){
        if(nilai[j]<minimal){
            minimal=nilai[j];
        }
    }

    cout<<minimal;
    return 0;
}