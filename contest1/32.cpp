#include<iostream>

using namespace std;

int main(){
    int a1,a2,a3;cin>>a1>>a2>>a3;
    int b1,b2,b3;cin>>b1>>b2>>b3;
    int n; cin>>n;
    int tong1, tong2, cach1, cach2;
    if (tong1%5==0) cach1=tong1/5;
    else cach1=tong1/5+1;
    if (tong2%10==0) cach2=tong2/5;
    else cach2=tong2/5+1;
    if (cach1+cach2<=n) cout<<"YES";
    else cout<<"NO";
    return 0;
}