
#include<iostream>

using namespace std;

int main(){
    char a; cin>>a;
    if(a>=65&&a<=90){
        if((a+32+1)>122){
            cout<<(char)(a+1+32-26);
        }
        else cout<<(char)(a+1+32);
        
    }
    else{
        if(a+1>122) cout<<(char)(a-25);
        else cout<<(char)(a+1);
    }
    return 0;
}