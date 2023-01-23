#include<iostream>
using namespace std;

int main(){

    int desimal; int batas2=0; int batas8=0; int biner[100]; 
    int oktal[100]; int perdua; int perlapan;
    
    cin>>desimal;

    perdua=desimal;
    perlapan=desimal;

    do{
        biner[batas2] = perdua%2;
        perdua = perdua/2;
        batas2++;
    }while(perdua>0);

    do{
        oktal[batas8]=perlapan%8;
        perlapan=perlapan/8;
        batas8++;
    }while(perlapan>0);

    cout<<endl;
    cout<<"Biner\t: ";
    
    for(int x=batas2-1; x>=0; x--){
        cout<<biner[x];
    }
    
    cout<<endl;
    cout<<"Oktal\t: ";
    
    for(int y=batas8-1; y>=0; y--){
        cout<<oktal[y];
    }

    return 0;
}
