#include<iostream>
#include<string>
using namespace std;

int main(){
    int jml;
    cin>>jml;
    string kata[jml];

    for(int x=0; x<jml; x++){
        cin>>kata[x];
    }
    int m=0;
    for(int x=0; x<jml; x++){
        if(kata[x].length()>m){
            m=kata[x].length();
        }
    }
    for(int z=0; z<m; z++){
        for(int y=0; y<jml; y++){
                cout<<kata[y][z]<<" ";
        }
        cout<<endl;
    }
    return 0;
}