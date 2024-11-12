#include<iostream>

using namespace std;

int main (){
    int a,b,c,n;cin>>a>>b>>c>>n;
    int tong = a + b + c + n;
    if (tong%3==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
