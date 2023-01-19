#include<iostream>
using namespace std;

int main(){
    int desimal; int batas=0; int sisa[batas];

    cin>>desimal;

    do{
        sisa[batas] = desimal % 2;
        desimal = desimal / 2;
        batas++;
    }while(desimal>0);
    
    for(int x=batas-1; x>=0; x--){
        cout<<sisa[x];
    }
    return 0;
}
