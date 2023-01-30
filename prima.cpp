#include<iostream>
using namespace std;

int main(){
    int bilangan; int sisa; bool prima=true;

    cout<<"input bilangan : ";
    cin>>bilangan;

    for(int x=2; x<bilangan; x++){
        sisa=bilangan%x;
        if(sisa==0){
            prima=false;
            break;
        }
    }

    if(prima==true){
        cout<<bilangan<<" Merupakan Bilangan Prima";
    } else {
        cout<<bilangan<<" Bukan bilangan Prima";
    }
}