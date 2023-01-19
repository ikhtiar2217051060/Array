#include<iostream>
using namespace std;

int main(){
    char input; int batas=0; char data[100];
    
    do{
        cin>>input;
        data[batas]=input;
        batas++;
    }while(input!='.');

    for(int x=batas-2; x>=0; x--){
        cout<<data[x];
    }
}
