#include<iostream>

using namespace std;

int main(){
    int n,m;cin>>n>>m;
    for(int i = n/2; i >= 0;i--){
        int n1=n-i*2;
        if((n1+i)%m==0){
            cout<<n1+i;
            return 0;
        }
        
    }
    cout<<"-1";  
    return 0;
}