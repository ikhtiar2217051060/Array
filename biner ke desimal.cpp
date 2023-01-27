#include<iostream>
using namespace std;

int main(){
    int digit[100]; long int biner; int batas=0;
    long int desimal=0; long int faktor=1;
    
    cin>>biner;
    
    do{
        digit[batas]=biner%2;
        biner=biner/10;
        batas++;
    }while(biner>0);
    
    for(int x=0; x<batas; x++){
        desimal+=digit[x]*faktor;
        faktor*=2;
    }
    cout<<desimal;
    
    return 0;
}
