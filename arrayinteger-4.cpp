#include<iostream>
using namespace std;
/*program mencari nilai minimal dan maksimal*/
int main(){
    int jml;
    cin>>jml;
    int nilai[jml];

    for(int i=0; i<jml; i++){
        cout<<"input nilai ke-"<<i+1<<": ";
        cin>>nilai[i];
    }
    int minimal=9999;
    int maksimal=-9999;
    for(int j=0; j<jml; j++){
        if(nilai[j]<minimal){
            minimal=nilai[j];
        }
        if(nilai[j]>maksimal){
            maksimal=nilai[j];
        }
    }

    cout<<"nilai minimal: "<<minimal;
    cout<<"\nnilai maksimal: "<<maksimal;
    return 0;
}