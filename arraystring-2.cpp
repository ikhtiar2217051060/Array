#include<iostream>
#include<string>
using namespace std;
/*program mengecek kata yang diawali huruf A/a.*/
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
/*kata[x][y] artinya kata ke-x dan elemen(huruf) ke-y.*/

    return 0;
}