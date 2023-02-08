#include<iostream>
#include<string>
using namespace std;

int main(){

    int jml; 
    cin>>jml;

    string kata[jml];

    for(int i=0; i<jml; i++){
        cin>>kata[i];
    }

    for(int j=0; j<jml; j++){
        if(kata[j][0]=='A'||kata[j][0]=='a'){
            cout<<kata[j]<<endl;
        }
    }

    return 0;
}