#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, tong=0; cin>>n;

    for (int i=1;i<=n;++i){
        if (n%i==0){
            tong = tong + i;
        }
    }
    cout<<tong;
    return 0;
}