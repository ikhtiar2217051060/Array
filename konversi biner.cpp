#include<iostream>
using namespace std;

int main(){

    int desimal; int batas2=0; int batas8=0; int biner[100]; 
    int oktal[100]; int perdua; int perlapan; int per16;
    int heksa[100]; int batas16=0;
    
    cout<<"Desimal\t\t : ";
    cin>>desimal;

    perdua=desimal;
    perlapan=desimal;
    per16=desimal;

    do{
        biner[batas2] = perdua%2;
        perdua = perdua/2;
        batas2++;
    }while(perdua>0);
    
    do{
        heksa[batas16]=per16%16;
        per16=per16/16;
        batas16++;
    }while(per16>0);

    do{
        oktal[batas8]=perlapan%8;
        perlapan=perlapan/8;
        batas8++;
    }while(perlapan>0);

    cout<<endl;
    cout<<"Biner\t\t : ";
    
    for(int x=batas2-1; x>=0; x--){
        cout<<biner[x];
    }
    
    cout<<endl;
    cout<<"Oktal\t\t : ";
    
    for(int y=batas8-1; y>=0; y--){
        cout<<oktal[y];
    }
    
    cout<<endl;
    cout<<"Heksadesimal : ";
    
    for(int z=batas16-1; z>=0; z--){
        if(heksa[z]==10){
            cout<<"A";
        } else if(heksa[z]==11){
            cout<<"B";
        } else if(heksa[z]==12){
            cout<<"C";
        } else if(heksa[z]==13){
            cout<<"D";
        } else if(heksa[z]==14){
            cout<<"E";
        } else if(heksa[z]==15){
            cout<<"F";
        } else {
            cout<<heksa[z];
        }
    }

    return 0;
}
