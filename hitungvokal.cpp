#include<iostream>
#include<string>
using namespace std;

int main(){
    int vokal=0; string kata; 
    getline(cin, kata);

    for(int i=0; i<=kata.length(); i++){
        if(kata[i]=='a'||kata[i]=='i'||kata[i]=='u'
        ||kata[i]=='e'||kata[i]=='0'){
            vokal++;
        }
    }
    cout<<"Banyaknya huruf vokal dalam kata tsb: "<<vokal;
    return 0;
}
